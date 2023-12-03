#include "dominios.h"

const bool Senha::ispontuacao(char caractere) { // Verifica se o caractere e um sinal de pontuacao
    if (caractere == '.' || caractere == ',' || caractere == ';' || caractere == '?' || caractere == '!') {
        return true;
    }
    return false;
}

const void Email::validar(string valor) {
    size_t pos_separador;
    pos_separador = valor.find("@");

    if (pos_separador == -1) { // Verifica se existe algum '@'
        throw invalid_argument("O caractere @ nao pode ser encontrado.");
    }

    if (pos_separador != valor.rfind("@")) { // Verifica se existe mais de 1 '@'
        throw invalid_argument("O caractere '@' so pode ser utilizado para separar o nome e o dominio.");
    }

    if (pos_separador < TAMANHO_MIN_NOME || pos_separador > TAMANHO_MAX_NOME) { // Verifica o tamanho do nome
        throw invalid_argument("O nome do email deve ter entre 2 e 10 caracteres");
    }

    if (valor.size() - pos_separador - 1 < TAMANHO_MIN_DOMINIO || valor.size() - pos_separador - 1> TAMANHO_MAX_DOMINIO) { // Verifica o tamanho do dominio
        throw invalid_argument("O dominio do email deve ter entre 2 e 20 caracteres;");
    }

    for (int i = 0; i < valor.size(); i++) {
        if (!isalnum(valor.at(i)) && (valor.at(i) != '.') && (valor.at(i) != '@')) { // Verifica se existe algum caractere nao valido
            throw invalid_argument("O nome e o dominio so podem ser compostos por letras, numeros e '.'.");
        }
    }

    if (valor.at(pos_separador - 1) == '.' || valor.at(pos_separador + 1) == '.') { // Verifica se o '@' e precedido ou secedido por '.'
        throw invalid_argument("O '@' nao pode ser precido ou sucedido por '.'.");
    }

    if (valor.find("..") != -1) { // Verifica se existem caracteres '.' em sequencia.
        throw invalid_argument("O email nao pode conter o caracteres '.' em sequencia.");
    }
}

const void Senha::validar(string valor) {
    if (valor.size() != TAMANHO_SENHA) { // Verifica se o valor da senha tem 5 caracteres
        throw invalid_argument("A senha deve ter 5 caracteres.");
    }

    for (int i = 0; i < valor.size(); i++) {
        if (!isalnum(valor.at(i)) && !ispontuacao(valor.at(i))) { // Verifica se os caracteres da senha sao validos
            throw invalid_argument("A senha deve conter somente letras, numeros e sinais de pontuacao.");
        }
    }

    unsigned int qtd_letra_maiuscula = 0, qtd_letra_minuscula = 0, qtd_numero = 0, qtd_sinal_pontuacao = 0;

    for (int i = 0; i < valor.size(); i++) {
        if (isupper(valor.at(i))) { // Verifica se e letra maiuscula
            qtd_letra_maiuscula++;
        } else if (islower(valor.at(i))) { // Verifica se e letra minuscula
            qtd_letra_minuscula++;
        } else if (isdigit(valor.at(i))) { // Verifica se e numero
            qtd_numero++;
        } else {
            qtd_sinal_pontuacao++;
        }
    }

    if (!qtd_letra_maiuscula || !qtd_letra_minuscula || !qtd_numero || !qtd_sinal_pontuacao) { // Verifica se existe pelo menos um de cada tipo de caractere possivel
        throw invalid_argument("A senha deve conter pelo menos um numero, letra maiuscula, letra minuscula e sinal de pontuacao.");
    }

    for (int i = 0; i < valor.size() - 1; i++) {
        for (int j = i + 1; j < valor.size(); j++) {
            if (valor.at(i) == valor.at(j)) { // Verifica se os caracteres sao iguais
                throw invalid_argument("A senha nao pode conter caracteres repetidos.");
            }
        }
    }
}
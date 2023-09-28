#include "./dominios.hpp"

const void Codigo::validar(string valor) {
    if (valor.size() != TAMANHO_CODIGO) { // Verifica se o codigo tem 4 caracteres
        throw invalid_argument("Codigo deve ter 4 caracteres.");
    }
    
    for (int i = 0; i < 2; i++) {
        if (!isupper(valor.at(i))) { // Verifica se os primeiros caracteres sao letras maiusculas.
            throw invalid_argument("Os 2 primeiros caracteres devem ser letras maiusculas.");
        }
    }
    
    for (int i = 2; i < 4; i++) {
        if (!isdigit(valor.at(i))) { // Verifica se os primeiros caracteres sao numeros.
            throw invalid_argument("Os 2 primeiros caracteres devem ser numeros.");
        }
    }
}

void Codigo::setCodigo(string valor) {
    validar(valor);
    this->valor = valor;
}


const void Coluna::validar(string valor) {
    if (valor != "SOLICITADO" && valor != "EM EXECUCAO" && valor != "CONCLUIDO") { // Verifica se o valor uma das tres opcoes
        throw invalid_argument("A coluna deve sem do tipo 'SOLICITADO', 'EM EXECUCAO' ou 'CONCLUIDO'.");
    }
}

void Coluna::setColuna(string valor) {
    validar(valor);
    this->valor = valor;
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

void Email::setEmail(string valor) {
    validar(valor);
    this->valor = valor;
}


const void Limite::validar(unsigned int valor) {
    if (valor != 5 && valor != 10 && valor != 15 && valor != 20) { // Verifica se o valor do limite e um valor aceito.
        throw invalid_argument("O limite deve ser 5, 10, 15 ou 20.");
    }
}

void Limite::setLimite(unsigned int valor) {
    validar(valor);
    this->valor = valor;
}


const bool Senha::ispontuacao(char caractere) { // Verifica se o caractere e um sinal de pontuacao
    if (caractere == '.' || caractere == ',' || caractere == ';' || caractere == '?' || caractere == '!') {
        return true;
    }
    return false;
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

void Senha::setSenha(string valor) {
    validar(valor);
    this->valor = valor;
}


const bool Texto::ispontuacao(char caractere) { // Verifica se o caractere e um sinal de pontuacao
    if (caractere == '.' || caractere == ',' || caractere == ';' || caractere == '?' || caractere == '!') {
        return true;
    }
    return false;
}

const void Texto::validar(string valor) {
    if (valor.size() < TAMANHO_MIN_TEXTO || valor.size() > TAMANHO_MAX_TEXTO) { // Verifica se o texto tem entre 5 e 30 caracteres
        throw invalid_argument("O texto deve ter entre 5 e 30 caracteres.");
    }

    for (int i = 0; i < valor.size(); i++) {
        if (!isalnum(valor.at(i)) && !ispontuacao(valor.at(i)) && valor.at(i) != ' ')  { // Verifica se o texto contem caracteres invalidos
            throw invalid_argument("O texto deve conter somente letras nao acentuadas, numeros, sinais de pontuacao e espacos em branco.");
        }
    }

    if (valor.find("  ") != -1) { // Verifica se existe espacos em branco sequenciados
        throw invalid_argument("O texto nao pode conter espacos em branco sequenciados.");
    }

    for (int i = 0; i < valor.size() - 1; i++) {
        if (ispontuacao(valor.at(i))) { // Verifica a ocorrencia de sinais de pontuacao
            if (ispontuacao(valor.at(i + 1))) { // Verifica se existe um sinal de pontuacao seguido de outro
                throw invalid_argument("O texto nao pode conter sinais de pontuacao sequenciados.");
            }
            if (!isupper(valor.at(i + 1)) && (valor.at(i + 1) != ',' || valor.at(i + 1) != ';')) { // Verifica se o proximo caractere depois de um sinal de pontuacao (!= ',', ';')
                throw invalid_argument("Letra depois dos seguintes sinais de pontuacao ('!', '.', '?') devem ser maiusculas.");
            }
        }
    }

    if (!isupper(valor.at(0))) {
        throw invalid_argument("O texto deve comecar em letra maiuscula.");
    }

    // Terminar ultimo requisito de validacao de texto.
}

void Texto::setTexto(string valor) {
    validar(valor);
    this->valor = valor;
}
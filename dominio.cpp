#include "dominio.h"

using namespace std;


void SENHA::verifica(string senha){
/** 
 * @brief
* verifica se a senha atende a alguns critérios específicos:
* - Deve conter exatamente 5 caracteres;
* - Deve conter pelo menos um caractere maiúsculo;
* - Deve conter pelo menos um caractere minúsculo;
* - Deve conter pelo menos um dígito;
* - Deve conter pelo menos um dos seguintes caracteres de pontuação: '.', ',', '!', '?', ';';
* - Não deve conter caracteres repetidos;
* @param senha a ser verificada.
* @throw exception_type: argumento invalido caso a senha não atenda um dos critérios estabelecidos.
*/
    if (senha.length() != 5) throw invalid_argument("Argumento invalido");
    /**< variaveis para verificação de casa critério. */
    int maiusculo = 0;
    int digito = 0;
    int minusculo = 0;
    int ponto = 0;
    int repetido = 1;

    string pontuacao = ".,!?;";
    for (char i : senha){
	/**
     * Verifica cada caractere na senha para determinar se ele é maiúsculo, 
     * minúsculo, um dígito, um caractere de pontuação 
     */
        if (int(i) >= (int)'A' && int(i) <= (int) 'Z')
        	maiusculo = 1;
        else if (int(i) >= (int)'a' && int(i) <= (int) 'z')
        	minusculo = 1;
        else if (int(i) >= (int)'0' && int(i) <= (int) '9')
        	digito = 1;
        else if (find(pontuacao.begin(), pontuacao.end(), i) != pontuacao.end())
        	ponto = 1;
        else
            throw invalid_argument("Argumento invalido");
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 5; j++){
	    /**
	     * @brief 
	    Verifica se há caracteres repetidos na senha. */
            if (senha[i] == senha[j]){
                repetido = 1;
				break;
            }
        }
		if (repetido == 0)
			break;
    }
    if (!(maiusculo & minusculo & digito & ponto & repetido))
        throw invalid_argument("Argumento invalido");
}


//---------------------------------------------------------------------------//

void CODIGO::verifica(string codigo){
/**
* @brief 
* verifica se o código atende a alguns critérios específicos:
* Os 2 primeiros termos tem que ser letras maiuscula;
* Os outros 2 são digitos de 0 a 9.
* @param codigo a ser verificado.
* @throw exception type: "argumento invalido" caso o código não atenda um dos critérios estabelecidos.
*/

    if ((int)codigo[0] < (int) 'A' || (int)codigo[0] > (int)'Z') throw invalid_argument("Argumento invalido"); /**< verifica se o primeiro caractere está entre 'A' e 'Z' */
    if ((int)codigo[1] < (int) 'A' || (int)codigo[1] > (int)'Z') throw invalid_argument("Argumento invalido"); /**< verifica se o segundo caractere está entre 'A' e 'Z' */
    if ((int)codigo[2] < (int) '0' || (int)codigo[2] > (int)'9') throw invalid_argument("Argumento invalido"); /**< verifica se o terceiro caractere é um dígito de'0' a '9' */
    if ((int)codigo[3] < (int) '0' || (int)codigo[3] > (int)'9') throw invalid_argument("Argumento invalido"); /**< verifica se o quarto caractere é um dígito de'0' a '9' */
}

//---------------------------------------------------------------------------//

void COLUNA::verifica(string coluna){
/** 
* @brief
* verifica se a coluna atende a um critério específico:
* Se é "SOLICITADO" ou "EM EXECUCAO" ou "CONCLUIDO".
* @param coluna a ser verificada.
* @throw exception type: "argumento invalido" caso a coluna não atenda ao critério estabelecido.
*/
    if (coluna == "SOLICITADO" || coluna == "EM EXECUCAO" ||coluna == "CONCLUIDO") return; /**< verifica se a coluna é uma das seguintes opções: "SOLICITADO", "EM EXECUÇÃO" ou "CONCLUIDO". */
    throw invalid_argument("Argumento invalido");
}

//---------------------------------------------------------------------------//

void EMAIL::verifica(string email){
    /** 
    * verifica se o endereço de email atende a alguns critérios específicos:
    * Se nome tem tamanho entre 2 e 10
    * Não há pontuacao consecutiva
    * Nao há pontuacao antes ou depois de "@";
    * @param email a ser verificado.
    * @throw exception type: "argumento invalido" caso o endereço de email não atenda um dos critérios estabelecidos.
    */ 
    int separador = 0;
    string nome, dominio; /**< Variáveis para armazenar o nome e o domínio do e-mail. */
    for (int i = 1; i < email.length(); i++)
    {
        if (email[i] == '.'){
            if (email[i-1] == '.' || email[i-1] == '@')
                throw invalid_argument("Argumento invalido");
        }
        if (email[i]=='@') {
	    /**< Extrai o nome e o domínio com base na posição do '@'*/	
            nome = email.substr(0,i);
            dominio = email.substr(i+1,email.length()-1);
            if (email[i-1] == '.')
                throw invalid_argument("Argumento invalido");
            continue;
        }   
        if (isalpha(email[i]) || isdigit(email[i]) || email[i]== '.')
            continue;
        else
        throw invalid_argument("Argumento invalido");

    }
    /**< Verifica se o comprimento do nome está entre 2 e 10 caracteres. */	
    if (nome.length() < 2 || nome.length() > 10)
        throw invalid_argument("Argumento invalido");
    /** Verifica se o comprimento do domínio está entre 2 e 20 caracteres. */	
    if (dominio.length() <2 || dominio.length() >20)
        throw invalid_argument("Argumento invalido");
}


//---------------------------------------------------------------------------//

void TEXTO::verifica(string texto) {
/** 
* verifica se o texto atende a alguns critérios específicos:
* - A primeira letra deve ser maiúscula;
* - O texto deve ter no mínimo 5 e no máximo 30 caracteres;
* - Os caracteres permitidos são letras (maiúsculas e minúsculas), pontuações ('.', ',', ';', '!', '?') e espaços em branco;
* - Não deve conter caracteres com acentuação;
* - Não deve conter sequências de pontuação ou espaços em branco consecutivos;
* @param o texto verificado
* saida: "argumento invalido" caso o texto não atenda um dos critérios estabelecidos.
*/
    string pontuacao = ".,;!?";
    if (!isupper(texto[0]))
        throw invalid_argument("Argumento invalido");
    if (texto.length() < 5 || texto.length() > 30)
        throw invalid_argument("Argumento invalido");
    for (int i = 1; i < texto.length(); i++) {
        if (isalnum(texto[i]))
            continue;
        else if (find(pontuacao.begin(), pontuacao.end(), texto[i]) != pontuacao.end()) {
            if (i != texto.length() -1){
                if (find(pontuacao.begin(), pontuacao.end(), texto[i+1]) != pontuacao.end())
                    throw invalid_argument("Argumento invalido");
                if (texto[i] == ',' || texto[i] == ';')
                    continue;
                if (!isupper(texto[i+1]))
                    throw invalid_argument("Argumento invalido");
            }    
        }
        else if (texto[i] == ' ') {
            if (i != texto.length() -1){
                if (texto[i+1] == ' ')
                    throw invalid_argument("Argumento invalido");
                continue;
            }
        }
    }
}

//---------------------------------------------------------------------------//

void LIMITE::verifica(int limite){
/** 
* verifica se o limite atende a um critério específico:
* - o limite deve ser um dos seguintes valores: 5, 10, 15, 20.
* @param limite a ser verificado
* saida: "argumento invalido" caso o limite não atenda ao critério estabelecido.
*/
    if (limite == 5 || limite == 10 || limite == 15 || limite == 20) {}
    else
        throw invalid_argument("Argumento invalido");
}

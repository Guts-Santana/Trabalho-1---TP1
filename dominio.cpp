#include "dominio.h"

using namespace std;


void SENHA::verifica(string senha){
/** 
* verifica se a senha atende a alguns critérios específicos:
* - Deve conter exatamente 5 caracteres;
* - Deve conter pelo menos um caractere maiúsculo;
* - Deve conter pelo menos um caractere minúsculo;
* - Deve conter pelo menos um dígito;
* - Deve conter pelo menos um dos seguintes caracteres de pontuação: '.', ',', '!', '?', ';';
* - Não deve conter caracteres repetidos;
* @param a senha verificada.
* saida: "argumento invalido" caso a senha não atenda um dos critérios estabelecidos.
*/
    if (senha.length() != 5) throw invalid_argument("Argumento invalido");
    int maiusculo = 0;
    int digito = 0;
    int minusculo = 0;
    int ponto = 0;
    int repetido = 1;

    string pontuacao = ".,!?;";
    for (char i : senha){
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
* verifica se o código atende a alguns critérios específicos:
* - O primeiro e o segundo caractere devem estar entre 'A' e 'Z';
* - O terceiro e o quarto caractere devem ser dígitos de 0 a 9;
* @param o código verificado.
* saida: "argumento invalido" caso o código não atenda um dos critérios estabelecidos.
*/

    if ((int)codigo[0] < (int) 'A' || (int)codigo[0] > 'Z') throw invalid_argument("Argumento invalido");
    if ((int)codigo[1] < (int) 'A' || (int)codigo[1] > 'Z') throw invalid_argument("Argumento invalido");
    if ((int)codigo[2] < (int) '0' || (int)codigo[2] > '9') throw invalid_argument("Argumento invalido");
    if ((int)codigo[3] < (int) '0' || (int)codigo[3] > '9') throw invalid_argument("Argumento invalido");
}

//---------------------------------------------------------------------------//

void COLUNA::verifica(string coluna){
/** 
* verifica se a coluna atende a um critério específico:
* - A coluna deve ser uma das seguintes opções: "SOLICITADO", "EM EXECUÇÃO" ou "CONCLUIDO".
* @param a coluna verificada.
* saida: "argumento invalido" caso a coluna não atenda ao critério estabelecido.
*/
    if (coluna == "SOLICITADO" || coluna == "EM EXECUÇÃO" ||coluna == "CONCLUIDO") return;
    throw invalid_argument("Argumento invalido");
}

//---------------------------------------------------------------------------//


void EMAIL::verifica(string email){
/** 
* verifica se o endereço de email atende a alguns critérios específicos:
* - O nome de usuário deve ter entre 3 e 10 caracteres alfanuméricos e pode conter pontos ('.') intercalados, mas não pode começar ou terminar com um ponto;
* - O domínio deve ter entre 3 e 10 caracteres alfanuméricos e pode conter pontos ('.') intercalados, mas não pode começar ou terminar com um ponto;
* @param o endereço de email verificado.
* saida: "argumento invalido" caso o endereço de email não atenda um dos critérios estabelecidos.
*/
    string nome = SeparaEmail("nome", email);
    if(nome.size() < 11 and nome.size() > 2){
        for(char i: nome){
            if(!isalnum(i) or i == '.'){
                throw invalid_argument("Argumento invalido");
            }
            if(nome.back() == '.'){
                throw invalid_argument("Argumento invalido");
            }
            for(int j = 0;char i : nome){
                if(i == '.'){
                    j++;
                }
                else{
                    j = 0;
                }
                if(j == 2){
                    throw invalid_argument("Argumento invalido");
                }
            }
        }
    }
    string dominio = SeparaEmail("dominio", email);
    if(dominio.size() < 11 and dominio.size() > 2){
        for(char i: dominio){
            if(!isalnum(i) and i != '.'){
                throw invalid_argument("Argumento invalido");
            }
            if(dominio.back() == '.'){
                throw invalid_argument("Argumento invalido");
            }
            for(int j = 0;char i : dominio){
                if(i == '.'){
                    j++;
                }
                else{
                    j = 0;
                }
                if(j == 2){
                    throw invalid_argument("Argumento invalido");
                }
            }
        }
    }
}

string EMAIL::SeparaEmail(string parte, string email){
/**
* Separa o nome de usuário ou o domínio de um endereço de e-mail.
*/  	
    string x, y;
    for(int j = 0; char i : email){
        if(i == '@'){
            j++;
        }
        else if(j==0){
            x = x + i;
        }
        else{
            y = y + i;
        }
    }
    if(parte == "nome"){
        return x;
    }
    else if(parte == "dominio"){
        return y;
    }
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
    int x = 0; // Contador de sequências de pontuação
    int y = 0; // Contador de sequências de espaços em branco
    if(isupper(texto[0])){
        if (texto.size() >= 5 && texto.size() <= 30) {
            int f = 0;
            for (char i : texto) {
                f++;
                if (isalnum(i) || find(pontuacao.begin(), pontuacao.end(), i) != pontuacao.end() || i == ' ') {
                    if ((int)i < 127) {
                        if (find(pontuacao.begin(), pontuacao.end(), i) != pontuacao.end()) {
                            x++;
                            if (i != ',' || i != ';')
                            {
                                if (f != texto.length())
                                {
                                    if (!isupper(texto[f])) throw invalid_argument("Argumento invalido"); // letra minuscula pos pontuacao
                                }
                                
                            }
                            
                        } else if (i == ' ') {
                            y++;
                        } else {
                            y = 0;
                            x = 0;
                        }
                        if (x > 1 || y > 1) {
                            throw invalid_argument("Argumento invalido"); // Sequência inválida
                        }
                    } else {
                        throw invalid_argument("Argumento invalido"); // Caractere com acentuação
                    }
                } else {
                    throw invalid_argument("Argumento invalido"); // Caractere inválido
                }

            }
            ; // Texto válido
        }
        throw invalid_argument("Argumento invalido"); // Tamanho do texto fora dos limites
    }
    throw invalid_argument("Argumento invalido"); // Primeira letra minuscula
}

//---------------------------------------------------------------------------//

void LIMITE::verifica(int limite){
/** 
* verifica se o limite atende a um critério específico:
* - o limite deve ser um dos seguintes valores: 5, 10, 15, 20.
* @param o limite verificado
* saida: "argumento invalido" caso o limite não atenda ao critério estabelecido.
*/
    if (limite == 5 || limite == 10 || limite == 15 || limite == 20) {}
    else
        throw invalid_argument("Argumento invalido");
}

#include "dominio.h"

using namespace std;


void SENHA::verifica(string senha){
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

    if ((int)codigo[0] < (int) 'A' || (int)codigo[0] > 'Z') throw invalid_argument("Argumento invalido");
    if ((int)codigo[1] < (int) 'A' || (int)codigo[1] > 'Z') throw invalid_argument("Argumento invalido");
    if ((int)codigo[2] < (int) '0' || (int)codigo[2] > '9') throw invalid_argument("Argumento invalido");
    if ((int)codigo[3] < (int) '0' || (int)codigo[3] > '9') throw invalid_argument("Argumento invalido");
}

//---------------------------------------------------------------------------//

void COLUNA::verifica(string coluna){
    if (coluna == "SOLICITADO" || coluna == "EM EXECUÇÃO" ||coluna == "CONCLUIDO") return;
    throw invalid_argument("Argumento invalido");
}

//---------------------------------------------------------------------------//

void EMAIL::verifica(string email){
    //verificar o nome
    int separador = 0;
    string nome, dominio;
    for (int i = 1; i < email.length(); i++)
    {
        if (email[i] == '.'){
            if (email[i-1] == '.' || email[i-1] == '@')
                throw invalid_argument("Argumento invalido");
        }
        if (email[i]=='@') {
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
    if (nome.length() < 2 || nome.length() > 10)
        throw invalid_argument("Argumento invalido");
    if (dominio.length() <2 || dominio.length() >20)
        throw invalid_argument("Argumento invalido");
}


//---------------------------------------------------------------------------//

void TEXTO::verifica(string texto) {

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
    if (limite == 5 || limite == 10 || limite == 15 || limite == 20) {}
    else
        throw invalid_argument("Argumento invalido");
}

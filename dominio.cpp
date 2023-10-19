#include "dominio.h"

using namespace std;


void SENHA::verifica(string senha){
    if (senha.length() != 5) throw invalid_argument("Argumento invalido");
    int maiusculo, minusculo, digito, ponto, repetido = 0;
    string pontuacao = ".,!?;";
    for (char i : senha){
        if (int(i) >= (int)'A' && int(i) <= (int) 'Z')
        	maiusculo = 1;
        if (int(i) >= (int)'a' && int(i) <= (int) 'z')
        	minusculo = 1;
        if (int(i) >= (int)'0' && int(i) <= (int) '9')
        	digito = 1;
        if (find(pontuacao.begin(), pontuacao.end(), i) != pontuacao.end())
        	ponto = 1;
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 5; j++){
            if (senha[i] == senha[j]){
                repetido = 1;
				break;
            }
        }
		if (repetido == 1)
			break;
    }

    if (!(maiusculo & minusculo & digito & ponto & !repetido));
    throw invalid_argument("Argumento invalido");
}


//---------------------------------------------------------------------------//

void CODIGO::verifica(string codigo){

    if ((int)codigo[0] <= (int) 'A' && (int)codigo[0] >= 'Z') throw invalid_argument("Argumento invalido");
    if ((int)codigo[1] <= (int) 'A' && (int)codigo[1] >= 'Z') throw invalid_argument("Argumento invalido");
    if ((int)codigo[2] <= (int) '0' && (int)codigo[2] >= '9') throw invalid_argument("Argumento invalido");
    if ((int)codigo[3] <= (int) '0' && (int)codigo[3] >= '9') throw invalid_argument("Argumento invalido");
}

//---------------------------------------------------------------------------//

void COLUNA::verifica(string coluna){
    if (coluna == "SOLICITADO" || coluna == "EM EXECUÇÃO" ||coluna == "CONCLUIDO")
        ;
    throw invalid_argument("Argumento invalido");
}

//---------------------------------------------------------------------------//


void EMAIL::verifica(string email){
    //verificar o nome
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
    //verificar o dominio
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
    throw invalid_argument("Argumento invalido"); // Primeira letra miniscula
}

//---------------------------------------------------------------------------//

void LIMITE::verifica(int limite){
    if (limite == 5 || limite == 10 || limite == 15 || limite == 20)
        throw invalid_argument("Argumento invalido");
}

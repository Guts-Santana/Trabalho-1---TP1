#include <iostream>
#include "dominio.h"
#include "entidade.h"
#include "teste.h"

using namespace std;

int main() {

    TUCODIGO testeA;

    switch(testeA.Run()){
        case TUCODIGO::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCODIGO::FALHA  : cout << "FALHA  - CODIGO" << endl;
            break;
    }

    TUCOLUNA testeB;

    switch(testeB.Run()){
        case TUCOLUNA::SUCESSO: cout << "SUCESSO - COLUNA" << endl;
            break;
        case TUCOLUNA::FALHA  : cout << "FALHA  - COLUNA" << endl;
            break;
    }

    TUEMAIL testeC;

    switch(testeC.Run()){
        case TUEMAIL::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
            break;
        case TUEMAIL::FALHA  : cout << "FALHA  - EMAIL" << endl;
            break;
    }

    TULIMITE testeD;

    switch(testeD.Run()){
        case TULIMITE::SUCESSO: cout << "SUCESSO - LIMITE" << endl;
            break;
        case TULIMITE::FALHA  : cout << "FALHA  - LIMITE" << endl;
            break;
    }

    TUSENHA testeE;

    switch(testeE.Run()){
        case TUSENHA::SUCESSO: cout << "SUCESSO - SENHA" << endl;
            break;
        case TUSENHA::FALHA  : cout << "FALHA  - SENHA" << endl;
            break;
    }

    TUTEXTO testef;

    switch(testeB.Run()){
        case TUTEXTO::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
            break;
        case TUTEXTO::FALHA  : cout << "FALHA  - TEXTO" << endl;
            break;
    }

    return 0;
}
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

    return 0;
}
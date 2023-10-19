#include <iostream>
#include "dominio.cpp"
#include "entidade.cpp"
#include "teste.cpp"

using namespace std;

int main()
{

    TUCODIGO testeA;

    switch(testeA.Run()){
        case TUCODIGO::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCODIGO::FALHA  : cout << "FALHA  - CODIGO" << endl;
            break;
    }

    return 0;
}
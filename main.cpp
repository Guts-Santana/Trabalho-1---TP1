#include <iostream>
#include "dominio.h"
#include "entidade.h"
#include "teste.h"

using namespace std;

int main() {
    
    TUCODIGO testeA; /**< teste para a classe TUCODIGO */

    switch(testeA.Run()){
        case TUCODIGO::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCODIGO::FALHA  : cout << "FALHA  - CODIGO" << endl;
            break;
    }
    
    TUCOLUNA testeB; /**< teste para a classe TUCOLUNA*/

    switch(testeB.Run()){
        case TUCOLUNA::SUCESSO: cout << "SUCESSO - COLUNA" << endl;
            break;
        case TUCOLUNA::FALHA  : cout << "FALHA  - COLUNA" << endl;
            break;
    }

    TUEMAIL testeC; /**< teste para a classe TUEMAIL*/

    switch(testeC.Run()){
        case TUEMAIL::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
            break;
        case TUEMAIL::FALHA  : cout << "FALHA  - EMAIL" << endl;
            break;
    }

    TULIMITE testeD; /**< teste para a classe TULIMITE*/

    switch(testeD.Run()){
        case TULIMITE::SUCESSO: cout << "SUCESSO - LIMITE" << endl;
            break;
        case TULIMITE::FALHA  : cout << "FALHA  - LIMITE" << endl;
            break;
    }

    TUSENHA testeE; /**< teste para a classe TUSENHA*/

    switch(testeE.Run()){
        case TUSENHA::SUCESSO: cout << "SUCESSO - SENHA" << endl;
            break;
        case TUSENHA::FALHA  : cout << "FALHA  - SENHA" << endl;
            break;
    }

    TUTEXTO testeF; /**< teste para a classe TUTEXTO*/

    switch(testeF.Run()){
        case TUTEXTO::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
            break;
        case TUTEXTO::FALHA  : cout << "FALHA  - TEXTO" << endl;
            break;
    }

    TUCONTA testeG;

    switch(testeG.Run()){
        case TUCONTA::SUCESSO: cout << "SUCESSO - CONTA" << endl;
            break;
        case TUCONTA::FALHA  : cout << "FALHA - CONTA" << endl;
            break;
    }

    TUQUADRO testeH;

    switch(testeH.Run()){
        case TUQUADRO::SUCESSO: cout << "SUCESSO - QUADRO" << endl;
            break;
        case TUQUADRO::FALHA  : cout << "FALHA - QUADRO" << endl;
            break;
    }

    TUCARTAO testeI;

    switch(testeI.Run()){
        case TUCARTAO::SUCESSO: cout << "SUCESSO - CARTAO" << endl;
            break;
        case TUCARTAO::FALHA  : cout << "FALHA - CARTAO" << endl;
            break;
    }

    return 0;
}

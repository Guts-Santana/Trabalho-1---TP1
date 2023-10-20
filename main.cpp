#include <iostream>
#include "dominio.h"
#include "entidade.h"
#include "teste.h"

using namespace std;

int main() {
    
    TUCODIGO testeA; /**< teste para a classe TUCODIGO */

    switch(testeA.Run()){
        case TUCODIGO::SUCESSO: cout << "SUCESSO - CODIGO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - CODIGO".*/
            break;
        case TUCODIGO::FALHA  : cout << "FALHA  - CODIGO" << endl; /** Se o teste falhar, imprime "FALHA  - CODIGO". */
            break;
    }
    
    TUCOLUNA testeB; /**< teste para a classe TUCOLUNA*/

    switch(testeB.Run()){
        case TUCOLUNA::SUCESSO: cout << "SUCESSO - COLUNA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - COLUNA".*/
            break;
        case TUCOLUNA::FALHA  : cout << "FALHA  - COLUNA" << endl;  /**< Se o teste falhar, imprime "FALHA  - COLUNA". */
            break;
    }

    TUEMAIL testeC; /**< teste para a classe TUEMAIL*/

    switch(testeC.Run()){
        case TUEMAIL::SUCESSO: cout << "SUCESSO - EMAIL" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - EMAIL".*/
            break;
        case TUEMAIL::FALHA  : cout << "FALHA  - EMAIL" << endl;  /** Se o teste falhar, imprime "FALHA  - EMAIL". */
            break;
    }

    TULIMITE testeD; /**< teste para a classe TULIMITE*/

    switch(testeD.Run()){
        case TULIMITE::SUCESSO: cout << "SUCESSO - LIMITE" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - LIMITE".*/
            break;
        case TULIMITE::FALHA  : cout << "FALHA  - LIMITE" << endl;  /** Se o teste falhar, imprime "FALHA  - LIMITE". */
            break;
    }

    TUSENHA testeE; /**< teste para a classe TUSENHA*/

    switch(testeE.Run()){
        case TUSENHA::SUCESSO: cout << "SUCESSO - SENHA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - SENHA".*/
            break;
        case TUSENHA::FALHA  : cout << "FALHA  - SENHA" << endl;  /** Se o teste falhar, imprime "FALHA  - SENHA". */
            break;
    }

    TUTEXTO testeF; /**< teste para a classe TUTEXTO*/

    switch(testeF.Run()){
        case TUTEXTO::SUCESSO: cout << "SUCESSO - TEXTO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - TEXTO".*/
            break;
        case TUTEXTO::FALHA  : cout << "FALHA  - TEXTO" << endl;  /** Se o teste falhar, imprime "FALHA  - TEXTO". */
            break;
    }

    TUCONTA testeG; /**< teste para a classe TUCONTA*/

    switch(testeG.Run()){
        case TUCONTA::SUCESSO: cout << "SUCESSO - CONTA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - CONTA".*/
            break;
        case TUCONTA::FALHA  : cout << "FALHA - CONTA" << endl;  /** Se o teste falhar, imprime "FALHA  - CONTA". */
            break;
    }

    TUQUADRO testeH; /**< teste para a classe TUQUADRO*/

    switch(testeH.Run()){
        case TUQUADRO::SUCESSO: cout << "SUCESSO - QUADRO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - QUADRO".*/
            break;
        case TUQUADRO::FALHA  : cout << "FALHA - QUADRO" << endl;  /** Se o teste falhar, imprime "FALHA  - QUADRO". */
            break;
    }

    TUCARTAO testeI; /**< teste para a classe TUCARTAO*/

    switch(testeI.Run()){
        case TUCARTAO::SUCESSO: cout << "SUCESSO - CARTAO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - CARTAO".*/
            break;
        case TUCARTAO::FALHA  : cout << "FALHA - CARTAO" << endl;  /** Se o teste falhar, imprime "FALHA  - CARTAO". */
            break;
    }

    return 0;
}

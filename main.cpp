#include <iostream>
#include "dominio.h"
#include "entidade.h"
#include "teste.h"

using namespace std;

int main()
{

//---------------------------------------------------------------------------
// Estrutura de código para instanciar e executar teste de unidade.
//
// Esse código pode ser adaptado para instanciar e executar testes.

/* --------------------------------------------------------------------------

    // Instanciar classe de teste de unidade.

    TUnidade teste;

    // Invocar método e apresentar mensagem acerca do resultado.

    switch(teste.run()){
        case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUnidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

-------------------------------------------------------------------------- */

    //-----------------------------------------------------------------------
    // Exemplo de código construído a partir da estrutura de código anterior.

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe domínio.

    // Instanciar classe de teste de domínio.

    TUCODIGO testeA;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(testeA.run()){
        case TUCODIGO::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCODIGO::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    return 0;
}
#include "teste.h"


// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUCODIGO::SetUp(){
    codigo = new CODIGO();
    estado = SUCESSO;
}

void TUCODIGO::TearDown(){
    delete codigo;
}

void TUCODIGO::TestarCenarioSucesso(){
    try{
        codigo->SetCodigo(CODIGO_VALIDO);
        if (codigo->GetCodigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCODIGO::TestarCenarioFalha(){
    try{
        codigo->SetCodigo(CODIGO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->GetCodigo() == CODIGO_INVALIDO)
            estado = FALHA;
    }
}

int TUCODIGO::run(){
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

/*void TUProjeto::setUp(){
    projeto = new Projeto();
    estado = SUCESSO;
}

void TUProjeto::tearDown(){
    delete projeto;
}

void TUProjeto::testarCenarioSucesso(){
    CODIGO codigo;
    codigo.setValor(VALOR_VALIDO);
    projeto->setCodigo(codigo);
    if(projeto->getCodigo().getValor() != VALOR_VALIDO)
        estado = FALHA;

    Prioridade prioridade;
    prioridade.setValor(VALOR_VALIDO);
    projeto->setPrioridade(prioridade);
    if(projeto->getPrioridade().getValor() != VALOR_VALIDO)
        estado = FALHA;
}

int TUProjeto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
*/
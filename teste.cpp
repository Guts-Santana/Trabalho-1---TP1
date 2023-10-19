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

int TUCODIGO::Run(){
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

//---------------------------------------------------------------------------//

void TUCOLUNA::SetUp(){
    coluna = new COLUNA();
    estado = SUCESSO;
}

void TUCOLUNA::TearDown(){
    delete coluna;
}

void TUCOLUNA::TestarCenarioSucesso(){
    try{
        coluna->SetColuna(COLUNA_VALIDA);
        if (coluna->GetColuna() != COLUNA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCOLUNA::TestarCenarioFalha(){
    try{
        coluna->SetColuna(COLUNA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (coluna->GetColuna() == COLUNA_INVALIDA)
            estado = FALHA;
    }
}

int TUCOLUNA::Run(){
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

//---------------------------------------------------------------------------//

void TUEMAIL::SetUp(){
    email = new EMAIL();
    estado = SUCESSO;
}

void TUEMAIL::TearDown(){
    delete email;
}

void TUEMAIL::TestarCenarioSucesso(){
    try{
        email->SetEmail(EMAIL_VALIDO);
        if (email->GetEmail() != EMAIL_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEMAIL::TestarCenarioFalha(){
    try{
        email->SetEmail(EMAIL_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->GetEmail() == EMAIL_INVALIDO)
            estado = FALHA;
    }
}

int TUEMAIL::Run(){
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

//---------------------------------------------------------------------------//

void TULIMITE::SetUp(){
    limite = new LIMITE();
    estado = SUCESSO;
}

void TULIMITE::TearDown(){
    delete limite;
}

void TULIMITE::TestarCenarioSucesso(){
    try{
        limite->SetLimite(LIMITE_VALIDO);
        if (limite->GetLimite() != LIMITE_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TULIMITE::TestarCenarioFalha(){
    try{
        limite->SetLimite(LIMITE_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (limite->GetLimite() == LIMITE_INVALIDO)
            estado = FALHA;
    }
}

int TULIMITE::Run(){
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

//---------------------------------------------------------------------------//

void TUSENHA::SetUp(){
    senha = new SENHA();
    estado = SUCESSO;
}

void TUSENHA::TearDown(){
    delete senha;
}

void TUSENHA::TestarCenarioSucesso(){
    try{
        senha->SetSenha(SENHA_VALIDA);
        if (senha->GetSenha() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSENHA::TestarCenarioFalha(){
    try{
        senha->SetSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->GetSenha() == SENHA_INVALIDA)
            estado = FALHA;
    }
}

int TUSENHA::Run(){
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

//---------------------------------------------------------------------------//

void TUTEXTO::SetUp(){
    texto = new TEXTO();
    estado = SUCESSO;
}

void TUTEXTO::TearDown(){
    delete texto;
}

void TUTEXTO::TestarCenarioSucesso(){
    try{
        texto->SetTexto(TEXTO_VALIDO);
        if (texto->GetTexto() != TEXTO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTEXTO::TestarCenarioFalha(){
    try{
        texto->SetTexto(TEXTO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->GetTexto() == TEXTO_INVALIDO)
            estado = FALHA;
    }
}

int TUTEXTO::Run(){
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
#include "teste.h"
#include <iostream>
using namespace std;

// --------------------------------------------------------------------------
/**< Implementações de métodos de classe de teste de unidade. */

void TUCODIGO::SetUp(){ /** Configura o ambiente de teste. */
    codigo = new CODIGO();
    estado = SUCESSO;
}

void TUCODIGO::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância CODIGO. */
    delete codigo;
}

void TUCODIGO::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o código é definido como um código válido. */
    try{
        codigo->SetCodigo(CODIGO_VALIDO);
        if (codigo->GetCodigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCODIGO::TestarCenarioFalha(){ /** Testa um cenário de falha em que o código é definido como um código inválido, */
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
    return estado; /**< Retorna o estado final dos testes (SUCESSO ou FALHA). */
}

//---------------------------------------------------------------------------//

void TUCOLUNA::SetUp(){ /** Configura o ambiente de teste. */
    coluna = new COLUNA();
    estado = SUCESSO;
}

void TUCOLUNA::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância COLUNA. */
    delete coluna;
}

void TUCOLUNA::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que a coluna é definida como uma coluna válida. */
    try{
        coluna->SetColuna(COLUNA_VALIDA);
        if (coluna->GetColuna() != COLUNA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCOLUNA::TestarCenarioFalha(){ /** Testa um cenário de falha em que a coluna é definida como uma coluna inválida. */
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
    return estado; /**< Retorna o estado final dos testes (SUCESSO ou FALHA). */
}

//---------------------------------------------------------------------------//

void TUEMAIL::SetUp(){  /** Configura o ambiente de teste. */
    email = new EMAIL();
    estado = SUCESSO;
}

void TUEMAIL::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância EMAIL. */
    delete email;
}

void TUEMAIL::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o email é definido como um email válido. */
    try{
        email->SetEmail(EMAIL_VALIDO);
        if (email->GetEmail() != EMAIL_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEMAIL::TestarCenarioFalha(){ /** Testa um cenário de falha em que o email é definido como um email inválido. */
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
    return estado; /**< Retorna o estado final dos testes (SUCESSO ou FALHA). */
}

//---------------------------------------------------------------------------//

void TULIMITE::SetUp(){  /** Configura o ambiente de teste. */
    limite = new LIMITE();
    estado = SUCESSO;
}

void TULIMITE::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância LIMITE. */
    delete limite;
}

void TULIMITE::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o limite é definido como um limite válido. */
    try{
        limite->SetLimite(LIMITE_VALIDO);
        if (limite->GetLimite() != LIMITE_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TULIMITE::TestarCenarioFalha(){ /** Testa um cenário de falha em que o limite é definido como um limite inválido. */
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
    return estado; /**< Retorna o estado final dos testes (SUCESSO ou FALHA). */
}

//---------------------------------------------------------------------------//

void TUSENHA::SetUp(){  /** Configura o ambiente de teste. */
    senha = new SENHA();
    estado = SUCESSO;
}

void TUSENHA::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância SENHA. */
    delete senha;
}

void TUSENHA::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que a senha é definida como uma senha válida. */
    try{
        senha->SetSenha(SENHA_VALIDA);
        if (senha->GetSenha() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSENHA::TestarCenarioFalha(){ /** Testa um cenário de falha em que a senha é definida como uma senha inválida. */
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
    return estado; /**< Retorna o estado final dos testes (SUCESSO ou FALHA). */
}

//---------------------------------------------------------------------------//

void TUTEXTO::SetUp(){  /** Configura o ambiente de teste. */
    texto = new TEXTO();
    estado = SUCESSO;
}

void TUTEXTO::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância TEXTO. */
    delete texto;
}

void TUTEXTO::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o texto é definido como um texto válido. */
    try{
        texto->SetTexto(TEXTO_VALIDO);
        if (texto->GetTexto() != TEXTO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTEXTO::TestarCenarioFalha(){ /** Testa um cenário de falha em que o texto é definido como um texto inválido. */
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
    return estado; /**< Retorna o estado final dos testes (SUCESSO ou FALHA). */
}
// --------------------------------------------------------------------------

void TUCONTA::SetUp(){  /** Configura o ambiente de teste. */
    conta = new CONTA();
    estado = SUCESSO;
}

void TUCONTA::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância TEXTO. */
    delete conta;
}

void TUCONTA::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o texto é definido como um texto válido. */

    EMAIL email;
    email.SetEmail(EMAIL_VALIDO);
    conta->SetEmail(email);
    if(conta->GetEmail().GetEmail() != EMAIL_VALIDO)
        estado = FALHA;

    TEXTO nome;
    nome.SetTexto(NOME_VALIDO);
    conta->SetNome(nome);
    if(conta->GetNome().GetTexto() != NOME_VALIDO)
        estado = FALHA;

    SENHA senha;
    senha.SetSenha(SENHA_VALIDA);
    conta->SetSenha(senha);
    if(conta->GetSenha().GetSenha() != SENHA_VALIDA)
        estado = FALHA;
}

int TUCONTA::Run(){
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

// --------------------------------------------------------------------------

void TUQUADRO::SetUp(){  /** Configura o ambiente de teste. */
    quadro = new QUADRO();
    estado = SUCESSO;
}

void TUQUADRO::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância TEXTO. */
    delete quadro;
}

void TUQUADRO::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o texto é definido como um texto válido. */

    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);
    quadro->SetCodigo(codigo);
    if(quadro->GetCodigo().GetCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    TEXTO nome;
    nome.SetTexto(NOME_VALIDO);
    quadro->SetNome(nome);
    if(quadro->GetNome().GetTexto() != NOME_VALIDO)
        estado = FALHA;

    TEXTO descricao;
    descricao.SetTexto(DESCRICAO_VALIDA);
    quadro->SetDescricao(descricao);
    if(quadro->GetDescricao().GetTexto() != DESCRICAO_VALIDA)
        estado = FALHA;
    
    LIMITE limite;
    limite.SetLimite(LIMITE_VALIDO);
    quadro->SetLimite(limite);
    if(quadro->GetLimite().GetLimite() != LIMITE_VALIDO)
        estado = FALHA;
}

int TUQUADRO::Run(){
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

// --------------------------------------------------------------------------

void TUCARTAO::SetUp(){  /** Configura o ambiente de teste. */
    cartao = new CARTAO();
    estado = SUCESSO;
}

void TUCARTAO::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância TEXTO. */
    delete cartao;
}

void TUCARTAO::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o texto é definido como um texto válido. */

    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);
    cartao->SetCodigo(codigo);
    if(cartao->GetCodigo().GetCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    TEXTO nome;
    nome.SetTexto(NOME_VALIDO);
    cartao->SetNome(nome);
    if(cartao->GetNome().GetTexto() != NOME_VALIDO)
        estado = FALHA;

    TEXTO descricao;
    descricao.SetTexto(DESCRICAO_VALIDA);
    cartao->SetDescricao(descricao);
    if(cartao->GetDescricao().GetTexto() != DESCRICAO_VALIDA)
        estado = FALHA;

    COLUNA coluna;
    coluna.SetColuna(COLUNA_VALIDA);
    cartao->SetColuna(coluna);
    if(cartao->GetColuna().GetColuna() != COLUNA_VALIDA)
        estado = FALHA;
}   
int TUCARTAO::Run(){
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

// --------------------------------------------------------------------------


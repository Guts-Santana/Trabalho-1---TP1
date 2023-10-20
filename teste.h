
#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED
// Incluir cabeçalhos.
#include "dominio.h"
#include "entidade.h"

using namespace std;

// --------------------------------------------------------------------------
// Exemplo de declaração de classe para teste de unidade de classe domínio.

class TUCODIGO {
private:
    const string CODIGO_VALIDO   = "LL00";
    const string CODIGO_INVALIDO = "FALA";
    CODIGO *codigo;
    int estado;
    void SetUp();
    void TearDown();
    void TestarCenarioSucesso();
    void TestarCenarioFalha();  

public:
    const static int SUCESSO =  0;
    const static int FALHA = -1;
    int Run();
};

class TUCOLUNA {
private:
    const string COLUNA_VALIDA = "CONCLUIDO";
    const string COLUNA_INVALIDA = "Conclui";
    COLUNA *coluna;
    int estado;
    void SetUp();
    void TearDown();
    void TestarCenarioSucesso();
    void TestarCenarioFalha();  

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};

class TUEMAIL {
private:
    const string EMAIL_VALIDO = "emailsmurf@gmail.com";
    const string EMAIL_INVALIDO = "emailnaovalido@.mail";
    EMAIL *email;
    int estado;
    void SetUp();
    void TearDown();
    void TestarCenarioSucesso();
    void TestarCenarioFalha();  

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};

class TULIMITE {
private:
    const int LIMITE_VALIDO = 10;
    const int LIMITE_INVALIDO = 30;
    LIMITE *limite;
    int estado;
    void SetUp();
    void TearDown();
    void TestarCenarioSucesso();
    void TestarCenarioFalha();  

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};

class TUSENHA {
private:
    const string SENHA_VALIDA = "T3s!A";
    const string SENHA_INVALIDA = "Fa!hA";
    SENHA *senha;
    int estado;
    void SetUp();
    void TearDown();
    void TestarCenarioSucesso();
    void TestarCenarioFalha();  

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};

class TUTEXTO {
private:
    const string TEXTO_VALIDO = "Testei um caso.Ponto conta?";
    const string TEXTO_INVALIDO = "Pontuacao invalida.teste";
    TEXTO *texto;
    int estado;
    void SetUp();
    void TearDown();
    void TestarCenarioSucesso();
    void TestarCenarioFalha();  

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};

//---------------------------------------------------------------------------//

class TUCONTA {
private:
    const string EMAIL_VALIDO = "emailsmurf@gmail.com";
    const string NOME_VALIDO = "Parapapapa";
    const string SENHA_VALIDA = "Ch4m;";
    CONTA *conta;
    int estado;                             
    void SetUp();                          
    void TearDown();                      
    void TestarCenarioSucesso();          

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};


class TUQUADRO {
private:
    const string CODIGO_VALIDO = "TE01";
    const string NOME_VALIDO = "Trabalho de TP1!";
    const string DESCRICAO_VALIDA = "Parte de testes";
    const int LIMITE_VALIDO = 10;
    QUADRO *quadro;
    int estado;                             
    void SetUp();                          
    void TearDown();                      
    void TestarCenarioSucesso();            

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};

class TUCARTAO {
private:
    const string CODIGO_VALIDO = "NM01";
    const string NOME_VALIDO = "Arroz";
    const string DESCRICAO_VALIDA = "Vamos testar codigos";
    const string COLUNA_VALIDA = "CONCLUIDO";
    CARTAO *cartao;
    int estado;                             
    void SetUp();                          
    void TearDown();                      
    void TestarCenarioSucesso();           

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int Run();
};
#endif
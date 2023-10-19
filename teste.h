
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
    const string CODIGO_VALIDO   = "LL00";   // Definição de constante para evitar número mágico.
    const string CODIGO_INVALIDO = "FALA";   // Definição de constante para evitar número mágico.
    CODIGO *codigo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void SetUp();                           // Método para criar unidade em teste.
    void TearDown();                        // Método para destruir unidade em teste.
    void TestarCenarioSucesso();            // Cenário de teste.
    void TestarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA = -1;          // Definição de constante para reportar resultado de teste.
    int Run();                              // Método para executar teste.
};

class TUCOLUNA {
private:
    const string COLUNA_VALIDA = "CONCLUIDO";   // Definição de constante para evitar número mágico.
    const string COLUNA_INVALIDA = "Conclui";   // Definição de constante para evitar número mágico.
    COLUNA *coluna;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void SetUp();                           // Método para criar unidade em teste.
    void TearDown();                        // Método para destruir unidade em teste.
    void TestarCenarioSucesso();            // Cenário de teste.
    void TestarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int Run();                              // Método para executar teste.
};

class TUEMAIL {
private:
    const string EMAIL_VALIDO = "emaildasmurfil.com";   // Definição de constante para evitar número mágico.
    const string EMAIL_INVALIDO = "emailnaovalido@.mail";   // Definição de constante para evitar número mágico.
    EMAIL *email;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void SetUp();                           // Método para criar unidade em teste.
    void TearDown();                        // Método para destruir unidade em teste.
    void TestarCenarioSucesso();            // Cenário de teste.
    void TestarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int Run();                              // Método para executar teste.
};

class TULIMITE {
private:
    const int LIMITE_VALIDO = 10;   // Definição de constante para evitar número mágico.
    const int LIMITE_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    LIMITE *limite;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void SetUp();                           // Método para criar unidade em teste.
    void TearDown();                        // Método para destruir unidade em teste.
    void TestarCenarioSucesso();            // Cenário de teste.
    void TestarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int Run();                              // Método para executar teste.
};

class TUSENHA {
private:
    const string SENHA_VALIDA = "T3s!A";   // Definição de constante para evitar número mágico.
    const string SENHA_INVALIDA = "Fa!hA";   // Definição de constante para evitar número mágico.
    SENHA *senha;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void SetUp();                           // Método para criar unidade em teste.
    void TearDown();                        // Método para destruir unidade em teste.
    void TestarCenarioSucesso();            // Cenário de teste.
    void TestarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int Run();                              // Método para executar teste.
};

class TUTEXTO {
private:
    const string TEXTO_VALIDO = "Testei um caso. Ponto conta?";   // Definição de constante para evitar número mágico.
    const string TEXTO_INVALIDO = "Pontuacao invalida. teste";   // Definição de constante para evitar número mágico.
    TEXTO *texto;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void SetUp();                           // Método para criar unidade em teste.
    void TearDown();                        // Método para destruir unidade em teste.
    void TestarCenarioSucesso();            // Cenário de teste.
    void TestarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int Run();                              // Método para executar teste.
};

#endif

#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED
/**< Incluir cabeçalhos.*/
#include "dominio.h"
#include "entidade.h"

using namespace std;

// --------------------------------------------------------------------------
/**< Exemplo de declaração de classe para teste de unidade de classe domínio.*/

class TUCODIGO {
private:
    const string CODIGO_VALIDO   = "LL00"; /**< Constante que representa um código válido para o teste. */
    const string CODIGO_INVALIDO = "FALA"; /**< Constante que representa um código inválido para o teste. */
    CODIGO *codigo;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUCOLUNA {
private:
    const string COLUNA_VALIDA = "CONCLUIDO"; /**< Constante que representa uma coluna valida para o teste. */
    const string COLUNA_INVALIDA = "Conclui"; /**< Constante que representa uma coluna invalida para o teste. */
    COLUNA *coluna;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */    

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUEMAIL {
private:
    const string EMAIL_VALIDO = "emailsmurf@gmail.com"; /**< Constante que representa um email valido para o teste. */
    const string EMAIL_INVALIDO = "emailnaovalido@.mail"; /**< Constante que representa um email invalido para o teste. */
    EMAIL *email;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */    

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TULIMITE {
private:
    const int LIMITE_VALIDO = 10;  /**< Constante que representa um limite valido para o teste. */
    const int LIMITE_INVALIDO = 30; /**< Constante que representa um limite invalido para o teste. */
    LIMITE *limite;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */    

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUSENHA {
private:
    const string SENHA_VALIDA = "T3s!A"; /**< Constante que representa uma senha valida para o teste. */
    const string SENHA_INVALIDA = "Fa!hA"; /**< Constante que representa uma senha invalida para o teste. */
    SENHA *senha;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */   

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */

class TUTEXTO {
private:
    const string TEXTO_VALIDO = "Testei um caso.Ponto conta?"; /**< Constante que representa um texto valido para o teste. */
    const string TEXTO_INVALIDO = "Pontuacao invalida.teste";  /**< Constante que representa um texto invalido para o teste. */
    TEXTO *texto;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */    

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};


//---------------------------------------------------------------------------//

class TUCONTA {
private:
    const string EMAIL_VALIDO = "emailsmurf@gmail.com";  /**< Constante que representa um email valido para o teste. */
    const string NOME_VALIDO = "Parapapapa";  /**< Constante que representa um nome valido para o teste. */
    const string SENHA_VALIDA = "Ch4m;";  /**< Constante que representa uma senha valida para o teste. */
    CONTA *conta;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */    

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};


class TUQUADRO {
private:
    const string CODIGO_VALIDO = "TE01";  /**< Constante que representa um codigo valido para o teste. */
    const string NOME_VALIDO = "Trabalho de TP1!";  /**< Constante que representa um nome valido para o teste. */
    const string DESCRICAO_VALIDA = "Parte de testes";  /**< Constante que representa uma descricao valida para o teste. */
    const int LIMITE_VALIDO = 10;  /**< Constante que representa um limite valido para o teste. */
    QUADRO *quadro;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUCARTAO {
private:
    const string CODIGO_VALIDO = "NM01"; /**< Constante que representa um codigo valido para o teste. */
    const string NOME_VALIDO = "Arroz"; /**< Constante que representa um nome valido para o teste. */
    const string DESCRICAO_VALIDA = "Vamos testar codigos"; /**< Constante que representa uma descricao valida para o teste. */
    const string COLUNA_VALIDA = "CONCLUIDO"; /**< Constante que representa uma coluna valida para o teste. */
    CARTAO *cartao;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};
#endif

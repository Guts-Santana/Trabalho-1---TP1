#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED


#include <stdexcept>
#include <algorithm>

using namespace std;

class CODIGO{
    private:
        string codigo;
        void verifica(string);
        /** 
        * verifica se o código atende a critérios específicos.
        * @param o código verificado.
        * saída: "argumento inválido" caso o código não atenda a um dos críterios estabelecidos.
        */

    public:
        string GetCodigo();
        /**
        * obtem o código;
        * retorna esse código.
        */
        void SetCodigo(string);
        /**
        * define o código.
        */
};

//---------------------------------------------------------------------------//

class TEXTO{
    private:
        string texto;
        void verifica(string);
        /**
        * verifica se o texto atende a alguns critérios específicos.
        * @param o texto verificado.
        * saída: "argumento inválido" caso o texto não atenda a um dos críterios estabelecidos.
        */
    
    public:
        string GetTexto();
        /**
        * obtem o texto;
        * retorna esse código.
        */
        void SetTexto(string);
        /**
        * define o texto.
        */
};

//---------------------------------------------------------------------------//

class LIMITE{
    private:
        int limite;
        void verifica(int);
        /**
        * verifica se o limite atende a alguns critérios específicos.
        * @param o limite verificado.
        * saída: "argumento inválido" caso o limite não atenda a um dos críterios estabelecidos.
        */
        
    public:
        int GetLimite();
        /**
        * obtem o limite;
        * retorna esse limite.
        */
        void SetLimite(int);
        /**
        * define o limite.
        */
};

//---------------------------------------------------------------------------//

class COLUNA{
    private:
        string coluna;
        void verifica(string);
        /** 
        * verifica se a coluna atende a critérios específicos.
        * @param a coluna verificada.
        * saída: "argumento inválido" caso a coluna não atenda a um dos críterios estabelecidos.
        */
        
    public:
        string GetColuna();
        /**
        * obtem a coluna;
        * retorna essa coluna.
        */
        void SetColuna(string);
        /**
        * define a coluna.
        */
};

//---------------------------------------------------------------------------//

class SENHA{
    private:
        string senha;
        void verifica(string);
        /** 
        * verifica se a senha atende a critérios específicos.
        * @param a senha verificada.
        * saída: "argumento inválido" caso o código não atenda a um dos críterios estabelecidos.
        */
        
    public:
        string GetSenha();
        /**
        * obtem a senha;
        * retorna essa senha.
        */
        void SetSenha(string);
        /**
        * define a senha.
        */
};

//---------------------------------------------------------------------------//

class EMAIL{
    private:
        string email;
        void verifica(string);
        /** 
        * verifica se o endereço de email atende a critérios específicos.
        * @param o endereço de email verificado.
        * saída: "argumento inválido" caso o endereço de email não atenda a um dos críterios estabelecidos.
        */
        string SeparaEmail(string, string);
    public:
        void SetEmail(string);
        /**
        * obtem o endereço de email;
        * retorna esse endereço de email.
        */
        string GetEmail();
        /**
        * define o endereço de email.
        */
};

//---------------------------------------------------------------------------//

inline void EMAIL::SetEmail(string email){
    verifica(email);
    this -> email = email;
}

inline string EMAIL::GetEmail(){
    return email;
}

//---------------------------------------------------------------------------//

inline void COLUNA::SetColuna(string coluna){
    verifica(coluna);
    this -> coluna = coluna;
}

inline string COLUNA::GetColuna(){
    return coluna;
}

//---------------------------------------------------------------------------//

inline void CODIGO::SetCodigo(string codigo){
    verifica(codigo);
    this -> codigo = codigo;
}

inline string CODIGO::GetCodigo(){
    return codigo;
}

//---------------------------------------------------------------------------//

inline void SENHA::SetSenha(string senha){
    verifica(senha);
    this -> senha = senha;
}

inline string SENHA::GetSenha() {
    return senha;
}

//---------------------------------------------------------------------------//

inline void TEXTO::SetTexto(string texto){
    verifica(texto);
    this -> texto = texto;
}

inline string TEXTO::GetTexto(){
    return texto;
}

//---------------------------------------------------------------------------//

inline void LIMITE::SetLimite(int limite){
    verifica(limite);
    this -> limite = limite;
}

inline int LIMITE::GetLimite(){
    return limite;
}

#endif

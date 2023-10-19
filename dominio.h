#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED


#include <stdexcept>
#include <algorithm>

using namespace std;

class CODIGO{
    private:
        string codigo;
        void verifica(string);

    public:
        string GetCodigo();
        void SetCodigo(string);
};

//---------------------------------------------------------------------------//

class TEXTO{
    private:
        string texto;
        void verifica(string);
    
    public:
        string GetTexto();
        void SetTexto(string);
};

//---------------------------------------------------------------------------//

class LIMITE{
    private:
        int limite;
        void verifica(int);

    public:
        int GetLimite();
        void SetLimite(int);
};

//---------------------------------------------------------------------------//

class COLUNA{
    private:
        string coluna;
        void verifica(string);
        
    public:
        string GetColuna();
        void SetColuna(string);
};

//---------------------------------------------------------------------------//

class SENHA{
    private:
        string senha;
        void verifica(string);
        
    public:
        string GetSenha();
        void SetSenha(string);
};

//---------------------------------------------------------------------------//

class EMAIL{
    private:
        string email;
        void verifica(string);
        string SeparaEmail(string, string);
    public:
        void SetEmail(string);
        string GetEmail();
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
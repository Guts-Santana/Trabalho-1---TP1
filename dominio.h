#include <iostream>
#include <algorithm>

using namespace std;

class CODIGO{
    private:
        string codigo;
        void verifica(string codigo);

    public:
        string GetCodigo();
        void SetCodigo(string codigo);
};

//---------------------------------------------------------------------------//

class TEXTO{
    private:
        string texto;
        void verifica(string texto);
    
    public:
        string GetTexto();
        void SetTexto(string texto);
};

//---------------------------------------------------------------------------//

class LIMITE{
    private:
        int limite;
        void verifica(int limite);

    public:
        int GetLimite();
        void SetLimite(int limite);
};

//---------------------------------------------------------------------------//

class COLUNA{
    private:
        string coluna;
        void verifica(string coluna);
        
    public:
        string GetColuna();
        void SetColuna(string coluna);
};

//---------------------------------------------------------------------------//

class SENHA{
    private:
        string senha;
        void verifica(string senha);
        
    public:
        string GetSenha();
        void SetSenha(string senha);
};

//---------------------------------------------------------------------------//

class EMAIL{
    private:
        string email;
        void verifica(string email);
        string SeparaEmail(string parte, string email);
    public:
        void SetEmail(string email);
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
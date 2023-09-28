#include <iostream>
#include <algorithm>

using namespace std;

class CODIGO{
    private:
        string codigo;
        bool verifica(string codigo);

    public:
        string GetCodigo();
        void SetCodigo(string codigo);
};

//---------------------------------------------------------------------------//

class TEXTO{
    private:
        string texto;
        bool verifica(string texto);
    
    public:
        string GetTexto();
        void SetTexto(string texto);
};

//---------------------------------------------------------------------------//

class LIMITE{
    private:
        int limite;
        bool verifica(int limite);

    public:
        int GetLimite();
        int SetLimite(int limite);
};

//---------------------------------------------------------------------------//

class COLUNA{
    private:
        string coluna;
        bool verifica(string coluna);
        
    public:
        string GetColuna();
        void SetColuna(string coluna);
};

//---------------------------------------------------------------------------//

class SENHA{
    private:
        string senha;
        bool verifica(string senha);
        
    public:
        string GetSenha();
        void SetSenha(string senha);
};

//---------------------------------------------------------------------------//

class EMAIL{
    private:
        string email;
        bool verifica(string email);
        string SeparaEmail(string parte, string email);
    public:
        void SetEmail(string email);
        string GetEmail();
};

//---------------------------------------------------------------------------//

inline void EMAIL::SetEmail(string email){
    if(verifica(email)) this -> email = email;
}

inline string EMAIL::GetEmail(){
    return email;
}

//---------------------------------------------------------------------------//

inline void COLUNA::SetColuna(string coluna){
    if (verifica(coluna)) this -> coluna = coluna;
}

inline string COLUNA::GetColuna(){
    return coluna;
}

//---------------------------------------------------------------------------//

inline void CODIGO::SetCodigo(string codigo){
    if(verifica(codigo)) this -> codigo = codigo;
}

inline string CODIGO::GetCodigo(){
    return codigo;
}

//---------------------------------------------------------------------------//

inline void SENHA::SetSenha(string senha){
    if (verifica(senha)) this -> senha = senha;
}

inline string SENHA::GetSenha() {
    return senha;
}

//---------------------------------------------------------------------------//

inline void TEXTO::SetTexto(string texto){
    if (verifica(texto)) this -> texto = texto;
}

inline string TEXTO::GetTexto(){
    return texto;
}

//---------------------------------------------------------------------------//

inline int LIMITE::SetLimite(int limite){
    if (verifica(limite)) this -> limite = limite;
}

inline int LIMITE::GetLimite(){
    return limite;
}
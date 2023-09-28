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

class TEXTO{
    private:
        string texto;
        bool verifica(string texto);
    
    public:
        string GetTexto();
        void SetTexto(string texto);
};

class LIMITE{
    private:
        int limite;
        bool verifica(int limite);

    public:
        int GetLimite();
        int SetLimite(int limite);
};

class COLUNA{
    private:
        string coluna;
        bool verifica(string coluna);
        
    public:
        string GetColuna();
        void SetColuna(string coluna);
};

class SENHA{
    private:
        string senha;
        bool verifica(string senha);
        
    public:
        string GetSenha();
        void SetSenha(string senha);
};

class EMAIL{
    private:
        string email;
        bool verifica(string email);
        string SeparaEmail(string parte, string email);
    public:
        void SetEmail(string email);
        string GetEmail();
};

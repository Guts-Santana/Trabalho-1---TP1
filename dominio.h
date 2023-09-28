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
        int SetLimite();
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

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//


void SENHA::SetSenha(string senha){
    if (verifica(senha)) this -> senha = senha;
}

bool SENHA::verifica(string senha){
    if (senha.length() != 5) return false;
    int maiusculo, minusculo, digito, sinal = 0;
    string pontuacao = ".,!?;";
    for (char i : senha){
        if (int(i) >= (int)'A' && int(i) <= (int) 'Z')
        maiusculo = 1;
        if (int(i) >= (int)'a' && int(i) <= (int) 'z')
        minusculo = 1;
        if (int(i) >= (int)'0' && int(i) <= (int) '9')
        digito = 1;
        if (find(pontuacao.begin(), pontuacao.end(), (char)senha[i]) != pontuacao.end())
        sinal = 1;
    }
    if (maiusculo & minusculo & digito & sinal) return true;
    return false;
}

inline string SENHA::GetSenha() {
    return senha;
}

//---------------------------------------------------------------------------//

bool CODIGO::verifica(string codigo){

    if ((int)codigo[0] <= (int) 'A' && (int)codigo[0] >= 'Z') return false;
    if ((int)codigo[1] <= (int) 'A' && (int)codigo[1] >= 'Z') return false;
    if ((int)codigo[2] <= (int) '0' && (int)codigo[2] >= '9') return false;
    if ((int)codigo[3] <= (int) '0' && (int)codigo[3] >= '9') return false;
    return true;
}

void CODIGO::SetCodigo(string codigo){
    if(verifica(codigo)) this -> codigo = codigo;
}

inline string CODIGO::GetCodigo(){
    return codigo;
}

//---------------------------------------------------------------------------//

bool COLUNA::verifica(string coluna){
    if (coluna == "SOLICITADO" || coluna == "EM EXECUÇÃO" ||coluna == "CONCLUIDO")
        return true;
    return false;
}

void COLUNA::SetColuna(string coluna){
    if (verifica(coluna)) this -> coluna = coluna;
}

inline string COLUNA::GetColuna(){
    return coluna;
}

//---------------------------------------------------------------------------//


bool EMAIL::verifica(string email){
    //verificar o nome
    string nome = SeparaEmail("nome", email);
    if(nome.size() < 11 and nome.size() > 2){
        for(char i: nome){
            if(!isalnum(i) or i == '.'){
                cout <<"tem caracter especial no nome do email";
                return false;
            }
            if(nome.back() == '.'){
                cout << "possui um ponto antecedendo o @";
                return false;
            }
            for(int j = 0;char i : nome){
                if(i == '.'){
                    j++;
                }
                else{
                    j = 0;
                }
                if(j == 2){
                    cout << "possui mais de um ponto em sequencia";
                    return false;
                }
            }
        }
    }
    //verificar o dominio
    string dominio = SeparaEmail("dominio", email);
    cout << dominio;
    if(dominio.size() < 11 and dominio.size() > 2){
        for(char i: dominio){
            if(!isalnum(i) and i != '.'){
                cout <<"tem caracter especial no dominio do email";
                return false;
            }
            if(dominio.back() == '.'){
                cout << "possui um ponto antecedendo o @";
                return false;
            }
            for(int j = 0;char i : dominio){
                if(i == '.'){
                    j++;
                }
                else{
                    j = 0;
                }
                if(j == 2){
                    cout << "possui mais de um ponto em sequencia";
                    return false;
                }
            }
        }
    }
    cout << "seu email e valido";
    return true;
}

string EMAIL::SeparaEmail(string parte, string email){
    string x, y;
    for(int j = 0; char i : email){
        if(i == '@'){
            j++;
        }
        else if(j==0){
            x = x + i;
        }
        else{
            y = y + i;
        }
    }
    if(parte == "nome"){
        return x;
    }
    else if(parte == "dominio"){
        return y;
    }
}

void EMAIL::SetEmail(string email){
    if(verifica(email)) this -> email = email;
}

inline string EMAIL::GetEmail(){
    return email;
}

//---------------------------------------------------------------------------//

bool TEXTO::verifica(string texto) {

    string pontuacao = ".,;!?";
    int x = 0; // Contador de sequências de pontuação
    int y = 0; // Contador de sequências de espaços em branco
    if(isupper(texto[0])){
        if (texto.size() >= 5 && texto.size() <= 30) {
            int f = 0;
            for (char i : texto) {
                f++;
                if (isalnum(i) || find(pontuacao.begin(), pontuacao.end(), i) != pontuacao.end() || i == ' ') {
                    if ((int)i < 127) {
                        if (find(pontuacao.begin(), pontuacao.end(), i) != pontuacao.end()) {
                            x++;
                            if (i != ',' || i != ';')
                            {
                                if (f != texto.length())
                                {
                                    if (!isupper(texto[f])) return false; // letra minuscula pos pontuacao
                                }
                                
                            }
                            
                        } else if (i == ' ') {
                            y++;
                        } else {
                            y = 0;
                            x = 0;
                        }
                        if (x > 1 || y > 1) {
                            return false; // Sequência inválida
                        }
                    } else {
                        return false; // Caractere com acentuação
                    }
                } else {
                    return false; // Caractere inválido
                }

            }
            return true; // Texto válido
        }
        return false; // Tamanho do texto fora dos limites
    }
    return false; // Primeira letra miniscula
}

void TEXTO::SetTexto(string texto){
    if (verifica(texto)) this -> texto = texto;
}

inline string TEXTO::GetTexto(){
    return texto;
}
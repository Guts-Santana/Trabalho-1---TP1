#include <iostream>
#include "dominio.h"

using namespace std;

class CONTA{
    private:
        TEXTO nome;
        EMAIL email;
        SENHA senha;

    public:
        void SetNome(const TEXTO&);
        void SetEmail(const EMAIL&);
        void SetSenha(const SENHA&);
        TEXTO GetNome();
        EMAIL GetEmail();
        SENHA GetSenha();
};

class QUADRO{
    private:
        CODIGO codigo;
        TEXTO nome;
        TEXTO descricao;
        LIMITE limite;

    public:
        void SetCodigo(const CODIGO&);
        void SetNome(const TEXTO&);
        void SetDescricao(const TEXTO&);
        void SetLimite(const LIMITE&);
        CODIGO GetCodigo();
        TEXTO GetNome();
        TEXTO GetDescricao();
        LIMITE GetLimite();
};

class CARTAO{
    private:
        CODIGO codigo;
        TEXTO nome;
        TEXTO descricao;
        COLUNA coluna;
    
    public:
        void SetCodigo(const CODIGO&);
        void SetNome(const TEXTO&);
        void SetDescricao(const TEXTO&);
        void SetColuna(const COLUNA&);
        CODIGO GetCodigo();
        TEXTO GetNome();
        TEXTO GetDescricao();
        COLUNA GetColuna();
};

//---------------------------------------------------------------------------//

inline void CONTA::SetNome(const TEXTO& nome){
    this -> nome = nome;
}

inline void CONTA::SetEmail(const EMAIL& email){
    this -> email = email;
}

inline void CONTA::SetSenha(const SENHA& senha){
    this -> email = email;
}

inline TEXTO CONTA::GetNome(){
    return nome;
}

inline EMAIL CONTA::GetEmail(){
    return email;
}

inline SENHA CONTA::GetSenha(){
    return senha;
}

//---------------------------------------------------------------------------//

inline void QUADRO::SetCodigo(const CODIGO& codigo){
    this -> codigo = codigo;
}

inline void QUADRO::SetDescricao(const TEXTO& descricao){
    this -> descricao = descricao;
}

inline void QUADRO::SetLimite(const LIMITE& limite){
    this -> limite = limite;
}

inline void QUADRO::SetNome(const TEXTO& nome){
    this -> nome = nome;
}

inline CODIGO QUADRO::GetCodigo(){
    return codigo;
}

inline TEXTO QUADRO::GetDescricao(){
    return descricao;
}

inline TEXTO QUADRO::GetNome(){
    return nome;
}

inline LIMITE QUADRO::GetLimite(){
    return limite;
}

//---------------------------------------------------------------------------//

inline void CARTAO::SetCodigo(const CODIGO& codigo){
    this -> codigo = codigo;
}

inline void CARTAO::SetDescricao(const TEXTO& descricao){
    this -> descricao = descricao;
}

inline void CARTAO::SetColuna(const COLUNA& coluna){
    this -> coluna = coluna;
}

inline void CARTAO::SetNome(const TEXTO& nome){
    this -> nome = nome;
}

inline CODIGO CARTAO::GetCodigo(){
    return codigo;
}

inline TEXTO CARTAO::GetDescricao(){
    return descricao;
}

inline TEXTO CARTAO::GetNome(){
    return nome;
}

inline COLUNA CARTAO::GetColuna(){
    return coluna;
}
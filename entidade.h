#ifndef ENTIDADE_H_INCLUDED
#define ENTIDADE_H_INCLUDED

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
        TEXTO GetNome() const;
        EMAIL GetEmail() const;
        SENHA GetSenha() const;
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
        CODIGO GetCodigo() const;
        TEXTO GetNome() const;
        TEXTO GetDescricao() const;
        LIMITE GetLimite() const;
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
        CODIGO GetCodigo() const; 
        TEXTO GetNome() const;
        TEXTO GetDescricao() const;
        COLUNA GetColuna() const;
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

inline TEXTO CONTA::GetNome() const{
    return nome;
}

inline EMAIL CONTA::GetEmail() const{
    return email;
}

inline SENHA CONTA::GetSenha() const{
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

inline CODIGO QUADRO::GetCodigo() const{
    return codigo;
}

inline TEXTO QUADRO::GetDescricao() const{
    return descricao;
}

inline TEXTO QUADRO::GetNome() const{
    return nome;
}

inline LIMITE QUADRO::GetLimite() const{
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

inline CODIGO CARTAO::GetCodigo() const{
    return codigo;
}

inline TEXTO CARTAO::GetDescricao() const{
    return descricao;
}

inline TEXTO CARTAO::GetNome() const{
    return nome;
}

inline COLUNA CARTAO::GetColuna() const{
    return coluna;
}

#endif
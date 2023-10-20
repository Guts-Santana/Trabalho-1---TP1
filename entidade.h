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
        /**
        * Define o nome associado à conta.
        * @param nome O nome a ser associado à conta.
        */
        void SetNome(const TEXTO&);
        /**
        * Define o email associado à conta.
        * @param nome O nome a ser associado à conta.
        */
        void SetEmail(const EMAIL&);
        /**
        * Define a senha associado à conta.
        * @param nome O nome a ser associado à conta.
        */
        void SetSenha(const SENHA&);
        TEXTO GetNome() const; /**< Obtém e retorna o nome associado à conta. */
        EMAIL GetEmail() const; /**< Obtém e retorna o endereço de e-mail associado à conta. */
        SENHA GetSenha() const; /**< Obtém e retorna a senha associada à conta. */
};

class QUADRO{
    private:
        CODIGO codigo;
        TEXTO nome;
        TEXTO descricao;
        LIMITE limite;

    public:
        /**
        * Define o código.
        * @param código.
        */
        void SetCodigo(const CODIGO&);
        /**
        * Define o nome.
        * @param nome.
        */
        void SetNome(const TEXTO&);
        /**
        * Define a descrição.
        * @param a descrição.
        */
        void SetDescricao(const TEXTO&);
        /**
        * Define o limite.
        * @param limite.
        */
        void SetLimite(const LIMITE&);
        CODIGO GetCodigo() const; /**< Obtém e retorna o código. */
        TEXTO GetNome() const; /**< Obtém e retorna o nome. */
        TEXTO GetDescricao() const; /**< Obtém e retorna a descrição. */
        LIMITE GetLimite() const; /**< Obtém e retorna o limite. */
};

class CARTAO{
    private:
        CODIGO codigo;
        TEXTO nome;
        TEXTO descricao;
        COLUNA coluna;
    
    public:
        /**
        * Define o código.
        * @param código.
        */
        void SetCodigo(const CODIGO&);
        /**
        * Define o nome.
        * @param nome.
        */
        void SetNome(const TEXTO&);
        /**
        * Define a descrição.
        * @param a descrição.
        */
        void SetDescricao(const TEXTO&);
        /**
        * Define a coluna.
        * @param a coluna.
        */
        void SetColuna(const COLUNA&);
        CODIGO GetCodigo() const;  /**< Obtém e retorna o código. */
        TEXTO GetNome() const; /**< Obtém e retorna o nome. */
        TEXTO GetDescricao() const; /**< Obtém e retorna a descrição. */
        COLUNA GetColuna() const; /**< Obtém e retorna a coluna. */
};

//---------------------------------------------------------------------------//

inline void CONTA::SetNome(const TEXTO& nome){
    this -> nome = nome;
}

inline void CONTA::SetEmail(const EMAIL& email){
    this -> email = email;
}

inline void CONTA::SetSenha(const SENHA& senha){
    this -> senha = senha;
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

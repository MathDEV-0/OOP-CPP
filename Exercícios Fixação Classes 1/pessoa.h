#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

class Pessoa {
protected:
    std::string nome;
    int idade;

public:
    Pessoa(const std::string& nome, int idade);
    virtual ~Pessoa();

    // Método virtual para permitir sobrescrita nas classes derivadas
    virtual void imprimirDados() const;
};

#endif

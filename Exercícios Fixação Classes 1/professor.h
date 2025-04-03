#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "pessoa.h"

class Professor : public Pessoa {
private:
    std::string disciplina;

public:
    Professor(std::string nome, int idade, const std::string& disciplina);

    // Sobrescreva o método da classe base
    void imprimirDados() const override;  // Assinatura igual à da classe base
};

#endif

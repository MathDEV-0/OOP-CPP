#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"
#include <string>

class Aluno : public Pessoa {
private:
    int matricula;

public:
    Aluno(std::string nome, int idade, int matricula);  // Construtor
    ~Aluno();  // Destrutor

    void imprimirDados() const override;  // Sobrescrever método imprimirDados
};

#endif

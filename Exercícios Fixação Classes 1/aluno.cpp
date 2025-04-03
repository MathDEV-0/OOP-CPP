#include "aluno.h"
#include <iostream>

Aluno::Aluno(std::string nome, int idade, int matricula)
    : Pessoa(nome, idade), matricula(matricula) {}

Aluno::~Aluno() {
    std::cout << "Destrutor de Aluno chamado." << std::endl;
}

void Aluno::imprimirDados() const {
    Pessoa::imprimirDados();  // Chama o método da classe base
    std::cout << "Matrícula: " << matricula << std::endl;
}

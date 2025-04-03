#include "professor.h"
#include <iostream>

Professor::Professor(std::string nome, int idade, const std::string& disciplina) 
    : Pessoa(nome, idade), disciplina(disciplina) {}

void Professor::imprimirDados() const {
    Pessoa::imprimirDados();  // Chama a implementação da classe base
    std::cout << "Disciplina: " << disciplina << std::endl;
}

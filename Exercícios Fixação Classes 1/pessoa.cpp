#include "pessoa.h"

Pessoa::Pessoa(const std::string& nome, int idade) : nome(nome), idade(idade) {}

Pessoa::~Pessoa() {
    std::cout << "Destrutor de Pessoa chamado." << std::endl;
}

void Pessoa::imprimirDados() const {
    std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
}

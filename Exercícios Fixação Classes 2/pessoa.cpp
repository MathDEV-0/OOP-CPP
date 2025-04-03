#include "pessoa.h"

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade) {}

string Pessoa::get_nome() const {
    return nome;
}

int Pessoa::get_idade() const {
    return idade;
}

void Pessoa::set_nome(string nome) {
    this->nome = nome;
}

void Pessoa::set_idade(int idade) {
    this->idade = idade;
}

void Pessoa::imprime_dados() const {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}

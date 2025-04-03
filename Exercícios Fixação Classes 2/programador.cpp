#include "programador.h"
#include <iostream>

using namespace std;

Programador::Programador(string nome, int idade, string linguagem_preferida)
    : Pessoa(nome, idade), linguagem_preferida(linguagem_preferida) {}

string Programador::get_linguagem_preferida() const {
    return linguagem_preferida;
}

void Programador::set_linguagem_preferida(string linguagem_preferida) {
    this->linguagem_preferida = linguagem_preferida;
}

void Programador::imprime_dados() const {
    Pessoa::imprime_dados();  
    cout << "Linguagem preferida: " << linguagem_preferida << endl;
}

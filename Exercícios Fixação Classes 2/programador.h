#ifndef PROGRAMADOR_H
#define PROGRAMADOR_H
#include <iostream>
#include "pessoa.h"

class Programador : public Pessoa {
private:
    string linguagem_preferida;

public:
    Programador(string nome, int idade, string linguagem_preferida);
    string get_linguagem_preferida() const;
    void set_linguagem_preferida(string linguagem_preferida);
    
    void imprime_dados() const override;  // Sobrescrevendo o método
};

#endif

#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    string get_nome() const;  
    int get_idade() const;   
    void set_nome(string nome);
    void set_idade(int idade);
    virtual void imprime_dados() const; 
};

#endif

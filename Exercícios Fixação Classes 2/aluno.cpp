#include <iostream>
#include "pessoa.h"
#include "aluno.h"

Aluno::Aluno(string nome,int idade,float nota): Pessoa(nome,idade),nota(nota){}

float Aluno::get_nota(){
    return nota;
};

void Aluno::set_nota(float nota){
    this->nota= nota;
}


void Aluno::imprime_dados() const {
    Pessoa::imprime_dados(); 
    cout << "Nota: " << nota << endl;
}
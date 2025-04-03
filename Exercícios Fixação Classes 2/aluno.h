#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include "pessoa.h"

class Aluno: public Pessoa{
    private:
        float nota;
    public:
        Aluno(string nome,int idade,float nota);
        float get_nota();
        void set_nota(float nota);
        void imprime_dados() const override;
};
#endif
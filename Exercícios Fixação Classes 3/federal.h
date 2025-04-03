#ifndef FEDERAL_H
#define FEDERAL_H


#include "deputado.h"
#include <iostream>

using namespace std;

class Federal:public Deputado{
    private:
        int num_cadastro;
    public:
        //Construtor
        Federal(string nome,string partido,double salario_liq,double salario_brut,int quant_funcionarios,int num_cadastro);
        
        //Getters
        int get_num_cadastro();
        
        //Setters
        void set_num_cadastro(int num_cadastro);

        //Imprime info
        void imprime_info();
        
        
        
};

#endif
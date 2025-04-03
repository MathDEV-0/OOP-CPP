/*
3) (1.5 pontos) Implemente a classe Estadual, que é um tipo de Deputado. Um Deputado Estadual possui,
além dos demais atributos, um estado. Implemente:
• os métodos de acesso (GET e SET) aos atributos (avalie a necessidade);
• um método construtor que inicializa todos os atributos; 
• sobrescreva o método polimórfico imprime_info(), responsável por imprimir as informações de um
deputado estadual;*/

#ifndef ESTADUAL_H
#define ESTADUAL_H
#include <iostream>
#include "deputado.h"

using namespace std;
class Estadual:public Deputado{
    private:
        string estado;
    public:
        //Construtor
        Estadual(string nome,string partido,double salario_liq,double salario_brut,int quant_funcionarios,string estado);
        
        //Getters
        string get_estado();
        
        //Setters
        void set_estado(string estado);
        
        //Imprime info
        void imprime_info();
};

#endif
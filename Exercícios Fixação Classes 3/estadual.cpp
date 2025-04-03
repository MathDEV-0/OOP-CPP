#include <iostream>
#include "estadual.h"

using namespace std;


//Construtor
Estadual::Estadual(string nome,string partido,double salario_liq,double salario_brut,int quant_funcionarios,string estado):Deputado(nome,partido,salario_liq,salario_brut,quant_funcionarios){
    this->estado=estado;
}


//Getters
string Estadual::get_estado(){
    return this->estado;
}

//Setters
void Estadual::set_estado(string estado){
    this->estado=estado;
}

//Imprime info
void Estadual::imprime_info(){
    Deputado::imprime_info();
    cout<<"Estado:"<<get_estado()<<endl;
}

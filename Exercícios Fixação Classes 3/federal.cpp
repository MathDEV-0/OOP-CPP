#include <iostream>
#include "federal.h"

using namespace std;

Federal::Federal(string nome,string partido,double salario_liq,double salario_brut,int quant_funcionarios,int num_cadastro): Deputado(nome,partido,salario_liq,salario_brut,quant_funcionarios){
    this->num_cadastro=num_cadastro;    
}
//Getters
int Federal::get_num_cadastro(){
    return this->num_cadastro;
}

//Setters
void Federal::set_num_cadastro(int num_cadastro){
    this->num_cadastro=num_cadastro;
}

//Imprime info
void Federal::imprime_info(){
    Deputado::imprime_info();
    cout<<"Número de cadastro:"<<get_num_cadastro()<<endl;
}


         
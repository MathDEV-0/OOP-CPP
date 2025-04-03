#include <iostream>
#include "deputado.h"

using namespace std;
//Construtor
Deputado::Deputado(string nome,string partido,double salario_liq,double salario_brut,int quant_funcionarios){
    this->nome=nome;
    this->partido=partido;
    this->salario_liq=salario_liq;
    this->salario_brut= salario_brut;
    this->quant_funcionarios=quant_funcionarios;
}

//Getters
    string Deputado::get_nome(){
        return this->nome;
    }
    
    string Deputado::get_partido(){
            return this->partido;
    }
    double Deputado::get_salario_liq(){
        return this->salario_liq;
    }
    double Deputado::get_salario_brut(){
        return this->salario_brut;
    }
    
    int Deputado::get_quant_funcionarios(){
        return this->quant_funcionarios;
    }

//Setters

    void Deputado::set_nome(string nome){
        this->nome=nome;
    }
    void Deputado::set_partido(string partido){
        this->partido=partido;
    }
    void Deputado::set_salario_liq(double salario_liq){
        this->salario_liq=salario_liq;
    }
    void Deputado::set_salario_brut(double salario_brut){
        this->salario_brut=salario_brut;
    }
    void Deputado::set_quant_funcionarios(int quant_funcionarios){
        this->quant_funcionarios=quant_funcionarios;
    }

    //Método + funcionários
    bool Deputado::mais_funcionarios(){
        int quantidade= get_quant_funcionarios();
        if(quantidade > 10){
            return true;
        }
        else{
            return false;
        }
    }


    //Método desvia verbas
    bool Deputado::desvia_verbas(){
        if(this->salario_liq>=this->salario_brut*0.8){
            return true;
        }
        else{
            return false;
        }
    }

    //Imprime info
    void Deputado::imprime_info(){
        cout<<"\nNome:"<< get_nome()<<"\tPartido:"<<get_partido()<<"\nSalário Líquido:"<<get_salario_liq()<<"\tSalário Bruto:"<<get_salario_brut()<<"\nQuantidade de funcionários:"<<get_quant_funcionarios()<<endl;
    }
        
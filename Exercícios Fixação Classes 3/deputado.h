#ifndef DEPUTADO_H
#define DEPUTADO_H

#include <iostream>

using namespace std;

class Deputado{
    private:
        string nome;
        string partido;
        double salario_liq;
        double salario_brut;
        int quant_funcionarios;
    public:
        Deputado(string nome,string partido,double salario_liq,double salario_brut,int quant_funcionarios);
        Deputado()=default;
        //Getters
        string get_nome();
        string get_partido();
        double get_salario_liq();
        double get_salario_brut();
        int get_quant_funcionarios();
        
        //Setters
        void set_nome(string nome);
        void set_partido(string partido);
        void set_salario_liq(double salario_liq);
        void set_salario_brut(double salario_brut);
        void set_quant_funcionarios(int quant_funcionarios);

        //Método + funcionários
        bool mais_funcionarios();


        //Método desvia verbas
        bool desvia_verbas();

        //Imprime info
        virtual void imprime_info();
        
        
        
};

#endif
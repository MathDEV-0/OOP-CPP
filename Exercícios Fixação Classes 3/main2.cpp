#include <iostream>
#include "deputado.h"
#include "federal.h"
#include "estadual.h"
#include <string>

using namespace std;
int main(){
    Deputado *deputados[5];

    for(int i=0;i<5;i++){
        int escolha;

        cout<<"Escolha:\n1.Federal:\n2.Estadual:"<<endl;

        cin>>escolha;
        
        
        //Deputado federal:

        if(escolha== 1){
            string nome,partido;
            double salario_liq,salario_brut;
            int quant_funcionarios;
            int num_cadastro;

            cout<<"Digite o nome:"<<endl;
            cin>>nome;

            cout<<"Digite o partido:"<<endl;
            cin>>partido;

            cout<<"Digite o salário líquido:"<<endl;
            cin>>salario_liq;

            cout<<"Digite o salário bruto:"<<endl;
            cin>>salario_brut;

            cout<<"Digite a quantidade de funcionários"<<endl;
            cin>>quant_funcionarios;

            cout<<"Digite seu número de cadastro: "<<endl;
            cin>>num_cadastro;

            Federal *f= new Federal(nome,partido,salario_liq,salario_brut,quant_funcionarios,num_cadastro);
            deputados[i]= f;
        }
        
        
        //Deputado estadual:

        else if(escolha ==2){
            string nome,partido;
            double salario_liq,salario_brut;
            int quant_funcionarios;
            string estado;

            cout<<"Digite o nome:"<<endl;
            cin>>nome;

            cout<<"Digite o partido:"<<endl;
            cin>>partido;
            

            cout<<"Digite o salário líquido:"<<endl;
            cin>>salario_liq;

            cout<<"Digite o salário bruto:"<<endl;
            cin>>salario_brut;

            cout<<"Digite a quantidade de funcionários"<<endl;
            cin>>quant_funcionarios;

            cout<<"Digite seu Estado: "<<endl;
            cin>>estado;

            Estadual* f= new Estadual(nome,partido,salario_liq,salario_brut,quant_funcionarios,estado);
            deputados[i]=f;
        }
        else{
            return -1;
        }
        //deputado[i]=f;
    }

    //Imprimir as informações de cada usuário

    cout<<"Informações de todos os deputados:"<<endl;
    for(int i=0;i<5;i++){
        deputados[i]->imprime_info();
    }

    //Corruptos

    cout<<"Deputados corruptos: "<<endl;
    cout<<"\n";
    int cont=0;
    for(int i=0;i<5;i++){
        
        
        if(deputados[i]->desvia_verbas() && deputados[i]->mais_funcionarios()){
            cont++;
            cout<<"Deputado corrupto["<<cont<<"]"<<endl;
             if(Federal *f= dynamic_cast<Federal*>(deputados[i])){
            cout<<"Nome:"<<f->get_nome()<<"\tPartido:"<<f->get_partido()<<"Cadastro: "<<f->get_num_cadastro()<<endl;
        }
            else if(Estadual *e= dynamic_cast<Estadual*>(deputados[i])){
            cout<<"Nome:"<<e->get_nome()<<"\tPartido:"<<e->get_partido()<<"Estado: "<<e->get_estado()<<endl;
        }
            cout<<"O(a) candidato " << deputados[i]->get_nome()<< " desviou verbas e possui mais funcionários do que deveria ("<<deputados[i]->get_quant_funcionarios()<<")"<<endl;
        }
            else if(deputados[i]->desvia_verbas()){
            cont++;
            cout<<"Deputado corrupto["<<cont<<"]"<<endl;
             if(Federal *f= dynamic_cast<Federal*>(deputados[i])){
                cout<<"Nome:"<<f->get_nome()<<"\tPartido:"<<f->get_partido()<<"\tCadastro: "<<f->get_num_cadastro()<<endl;
    }
            else if(Estadual *e= dynamic_cast<Estadual*>(deputados[i])){
            cout<<"Nome:"<<e->get_nome()<<"\tPartido:"<<e->get_partido()<<"\tEstado: "<<e->get_estado()<<endl;
    }
            cout<<"O(a) candidato(a) " << deputados[i]->get_nome()<< " desviou verbas"<<endl;
        }
            else if(deputados[i]->mais_funcionarios()){
            cont++;
            cout<<"Deputado corrupto["<<cont<<"]"<<endl;
            
                if(Federal *f= dynamic_cast<Federal*>(deputados[i])){
                        cout<<"Nome:"<<f->get_nome()<<"\tPartido:"<<f->get_partido()<<"\tCadastro: "<<f->get_num_cadastro()<<endl;
        }
                else if(Estadual *e= dynamic_cast<Estadual*>(deputados[i])){
                cout<<"Nome:"<<e->get_nome()<<"\tPartido:"<<e->get_partido()<<"\tEstado: "<<e->get_estado()<<endl;
        }
                cout<<"O(a) candidato(a)"<<deputados[i]->get_nome()<<" possui mais funcionários do que deveria("<<deputados[i]->get_quant_funcionarios()<<")"<<endl;
            
            }
            
        }

    if(cont==0){
        cout<<"Graças a Deus não há deputados corruptos"<<endl;
    }


    return 0;
}

//chdir Exercícios Fixação Classes 3
//g++ main2.cpp deputado.cpp federal.cpp estadual.cpp -o main2
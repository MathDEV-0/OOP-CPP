#include <iostream>

#include "aluno.h"
#include "pessoa.h"
#include "programador.h"

using namespace std;

int main() {
    Pessoa* pessoa;  
    Aluno* a;       
    Programador* p; 

    int escolha;
    cout << "Escolha o tipo de Pessoa a ser criada:\n";
    cout << "1. Programador\n";
    cout << "2. Aluno\n";
    cin >> escolha;

    if (escolha == 1) {
        string nome, linguagem;
        int idade;

        cout << "Digite o nome do Programador: ";
        cin >> nome;
        cout << "Digite a idade do Programador: ";
        cin >> idade;
        cout << "Digite a linguagem preferida do Programador: ";
        cin >> linguagem;

        p = new Programador(nome, idade, linguagem); 
        pessoa = p; 
    } else if (escolha == 2) {
        string nome;
        int idade;
        float nota;

        cout << "Digite o nome do Aluno: ";
        cin >> nome;
        cout << "Digite a idade do Aluno: ";
        cin >> idade;
        cout << "Digite a nota do Aluno: ";
        cin >> nota;

        a = new Aluno(nome, idade, nota); 
        pessoa = a; 
    } else {
        cout << "Escolha inválida!\n";
        return 1; 
    }

    
    pessoa->imprime_dados();

    

    return 0;
}
//chdir Exercícios Fixação Classes 2
//g++ main_2.cpp melancia.cpp banana.cpp fruta.cpp aluno.cpp pessoa.cpp programador.cpp -o main_2
#include "pessoa.h"
#include <iostream>
#include <string>
#include "professor.h"
#include "aluno.h"

using namespace std;

int main() {
    Pessoa *p = nullptr;  // Ponteiro para classe base

    int idade, escolha;
    string nome;

    cout << "1. Professor | 2. Aluno: ";
    cin >> escolha;
    cin.ignore();  // Limpar o buffer de entrada após o cin

    if (escolha == 1) {
        string disciplina;

        cout << "Digite o nome: " << endl;
        getline(cin, nome);

        cout << "Digite sua idade: " << endl;
        cin >> idade;
        cin.ignore();  // Limpar o buffer após cin para getline funcionar corretamente

        cout << "Digite a sua disciplina: ";
        getline(cin, disciplina);

        Professor professor(nome, idade, disciplina);  // Alocado na pilha
        p = &professor;  // Aponta para o endereço de professor

        p->imprimirDados();
    }
    else if (escolha == 2) {
        int matricula;

        cout << "Digite o nome: " << endl;
        getline(cin, nome);

        cout << "Digite sua idade: " << endl;
        cin >> idade;
        cin.ignore();  // Limpar o buffer após cin para getline funcionar corretamente

        cout << "Digite a sua matrícula: ";
        cin >> matricula;

        Aluno aluno(nome, idade, matricula);  // Alocado na pilha
        p = &aluno;  // Aponta para o endereço de aluno

        p->imprimirDados();
         // Chama o método virtual sobrescrito
    }
    else {
        cout << "Opção inválida!" << endl;
        return 1;
    }

     
    //g++ main.cpp pessoa.cpp professor.cpp aluno.cpp -o main
    
    return 0;
}

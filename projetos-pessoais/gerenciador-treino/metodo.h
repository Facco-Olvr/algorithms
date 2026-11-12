#include<iostream>
#include<string>
#include "ficha.h"
#include<vector>

using namespace std;

void cadastrarAluno(vector<ficha>& listaAlunos){

    ficha novoAluno;

    cin.ignore();

    cout << "=== NOVO ALUNO ===\n";

    cout << "Informe o nome do aluno: \n";
    getline(cin, novoAluno.nome);

    cout << "Informe o genero: \n";
    getline(cin, novoAluno.genero);

    cout << "Informe a idade: \n";
    cin >> novoAluno.idade;
    cin.ignore();

    cout << "Objetivo na academia (ex: Hipertrofia, Emagrecimento): \n";
    getline(cin, novoAluno.goals);

    cout << "Data de nascimento (dd\mm\aa): \n";
    getline(cin, novoAluno.data_nas);

    cout << "Cadastro do aluno completo!!\n";

    for(int i = 0; int)
}

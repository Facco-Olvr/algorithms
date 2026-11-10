#include<iostream>
#include<string>
#include "ficha.h"
#include<vector>

using namespace std;

void cadastrarAluno(ficha){

    vector<treino> treino;

    cout << "Informe o nome do aluno: \n";
    getline(cin, nome);
    cout << "Informe o genero: \n";
    cin >> genero;
    cout << "Informe a idade: \n";
    cin >> idade;
    cout << "Objetivo na academia: \n";
    cin >> goals;
    cout << "Data de nascimento (dd\mm\aa): \n";
    getline(cin, data_nas);

    cout << "Cadastro do aluno completo!!\n";
}


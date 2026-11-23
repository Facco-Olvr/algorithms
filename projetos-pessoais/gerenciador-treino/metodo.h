#include<iostream>
#include<string>
#include "academia.h"
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
    if(!(cin >> novoAluno.idade) || novoAluno.idade <= 0){
        cout << "Idade invalida!! Tente novamente.\n";
        cin.clear();
        return;
    }
    if(novoAluno.idade < 12){
        cout << "Idade nao permitida para treino\n";
        cin.clear();
        return;
    }
    cin.ignore();

    cout << "Objetivo na academia (ex: Hipertrofia, Emagrecimento): \n";
    getline(cin, novoAluno.goals);

    cout << "Data de nascimento (dd/mm/aa): \n";
    getline(cin, novoAluno.data_nas);

    cout << "Data de inscricao (dd/mm/aa): \n";
    getline(cin, novoAluno.data_ins);

    char montarTreino;

    cout << "Deseja montar o treino agora S/N? ";
    cin >> montarTreino;

    if(montarTreino == 's' || montarTreino == 'S' || montarTreino == 'SIM' || montarTreino == 'sim'){
        int qtdexercicios;
        if(!(cin >> qtdexercicios) || qtdexercicios <= 0){
            cout << "Quantidade invalida!! Treino em branco.\n";
        } else {
            for(int i = 0; i < qtdexercicios; i++){
                Treino itemTreino;

                cout << "--- Exercicio " << i + 1 << " ---\n";
            }
        }

    }

    listaAlunos.push_back(novoAluno);
    cout << "Cadastro do aluno completo!!\n";
}

void consultarAluno(const vector<ficha>& listaAlunos){

    if(listaAlunos.empty()){
        cout << "Nenhum aluno cadastrado no sistema\n";
    };
    
    string nomePesquisa;

    bool encontrou =  false;

    cout << "Informe o nome do aluno que deseja consultar: ";
    getline(cin, nomePesquisa);

    for(size_t i = 0; i < listaAlunos.size(); i++){
        if(listaAlunos[i].nome == nomePesquisa){
            encontrou = true;

            cout << "=== INFORMACOES DO ALUNO ===\n";
            cout << "Nome: " << listaAlunos[i].nome << "\n";
            cout << "Genero: " << listaAlunos[i].genero << "\n";
            cout << "Idade: " << listaAlunos[i].idade << "\n";
            cout << "Data de nascimento: " << listaAlunos[i].data_nas << "\n";
            cout << "Data de inscricao: " << listaAlunos[i].data_ins << "\n";
            cout << "Objetivo: " << listaAlunos[i].goals << "\n";
            cout << "Divisao de treino: " << listaAlunos[i].divisaoTreino << "\n";

        };
    };

    if(!encontrou){
        cout << "Aluno nao consta no sistema\n";
    }
}

void listarAlunos(const vector<ficha>& listaAlunos){
    if(listaAlunos.empty()){
        cout << "Nenhum aluno cadastrado.\n";
        return;
    }

    cout << "\n=== LISTA DE ALUNOS ===\n";
    for(size_t i = 0; i < listaAlunos.size(); i++){
        cout << i + 1 << " - Nome: " << listaAlunos[i].nome
             << " | Idade: " << listaAlunos[i].idade
             << " | Genero: " << listaAlunos[i].genero
             << " | Objetivo: " << listaAlunos[i].goals << "\n";
    }
}

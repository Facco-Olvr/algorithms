#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <fstream>
#include "academia.h"

using namespace std;

void carregarBase(vector<ficha>& listaAlunos) {
    ifstream arquivo("alunos.txt");

    if (!arquivo) {
        ofstream novoArquivo("alunos.txt");
        novoArquivo.close();
        return;
    }

    listaAlunos.clear();
    ficha aluno;

    while (getline(arquivo, aluno.nome)) {
        if (aluno.nome == "") {
            continue;
        }

        getline(arquivo, aluno.data_nas);
        getline(arquivo, aluno.data_ins);
        getline(arquivo, aluno.goals);
        getline(arquivo, aluno.genero);
        getline(arquivo, aluno.divisao);

        arquivo >> aluno.idade;
        arquivo.ignore(1000, '\n');

        size_t qtdEx = 0;
        arquivo >> qtdEx;
        arquivo.ignore(1000, '\n');

        aluno.listaExercicios.clear();
        for (size_t j = 0; j < qtdEx; j++) {
            treino item;
            getline(arquivo, item.exercicio);
            getline(arquivo, item.divisao);

            arquivo >> item.reps;
            arquivo.ignore(1000, '\n');

            arquivo >> item.series;
            arquivo.ignore(1000, '\n');

            aluno.listaExercicios.push_back(item);
        }

        listaAlunos.push_back(aluno);
    }

    arquivo.close();
}

void atualizarBase(vector<ficha> listaAlunos) {
    ofstream arquivo("alunos.txt");

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo para salvar.\n";
        return;
    }

    for (size_t i = 0; i < listaAlunos.size(); i++) {
        arquivo << listaAlunos[i].nome << "\n";
        arquivo << listaAlunos[i].data_nas << "\n";
        arquivo << listaAlunos[i].data_ins << "\n";
        arquivo << listaAlunos[i].goals << "\n";
        arquivo << listaAlunos[i].genero << "\n";
        arquivo << listaAlunos[i].divisao << "\n";
        arquivo << listaAlunos[i].idade << "\n";

        size_t qtdEx = listaAlunos[i].listaExercicios.size();
        arquivo << qtdEx << "\n";

        for (size_t j = 0; j < qtdEx; j++) {
            arquivo << listaAlunos[i].listaExercicios[j].exercicio << "\n";
            arquivo << listaAlunos[i].listaExercicios[j].divisao << "\n";
            arquivo << listaAlunos[i].listaExercicios[j].reps << "\n";
            arquivo << listaAlunos[i].listaExercicios[j].series << "\n";
        }
    }

    arquivo.close();
}

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

    if(montarTreino == 's' || montarTreino == 'S'){

        int qtdexercicios;
        cout << "Informe a quantidade de exercicios que deseja cadastrar: \n";
        if(!(cin >> qtdexercicios) || qtdexercicios <= 0){
            cout << "Quantidade invalida!! Treino em branco.\n";
        } else {
            for(int i = 0; i < qtdexercicios; i++){

                treino itemTreino;
                
                cout << "Informe a divisao do exercicio (ex: upper, lower, fullbody): \n";
                getline(cin, itemTreino.divisao);

                cout << "--- Exercicio " << i + 1 << " ---\n";
                cout << "Informe o nome do exercicio: \n";
                getline(cin, itemTreino.exercicio);

                cout << "Informe a quantidade de series: \n";
                if(!(cin >> itemTreino.series) || itemTreino.series <= 0){
                    cout << "Quantidade de series invalida!! Treino em branco.\n";
                    cin.clear();
                    break;
                }

                cout << "Informe a quantidade de repeticoes: \n";
                if(!(cin >> itemTreino.reps) || itemTreino.reps <= 0){
                    cout << "Quantidade de repeticoes invalida!! Treino em branco.\n";
                    cin.clear();
                    break;
                }
                novoAluno.listaExercicios.push_back(itemTreino);
            }
        }
    }

    listaAlunos.push_back(novoAluno);
    cout << "Cadastro do aluno completo!!\n";
}

void consultarAluno(const vector<ficha>& listaAlunos){

    if(listaAlunos.empty()){
        cout << "Nenhum aluno cadastrado no sistema\n";
        return;
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
            cout << "Divisao de treino: " << listaAlunos[i].divisao << "\n";

            for(size_t j = 0; j < listaAlunos[i].listaExercicios.size(); j++){
                cout << "--- Exercicio " << j + 1 << " ---\n";
                cout << "Nome do exercicio: " << listaAlunos[i].listaExercicios[j].exercicio << "\n";
                cout << "Divisao: " << listaAlunos[i].listaExercicios[j].divisao << "\n";
                cout << "Quantidade de series: " << listaAlunos[i].listaExercicios[j].series << "\n";
                cout << "Quantidade de repeticoes: " << listaAlunos[i].listaExercicios[j].reps << "\n";
            }
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

void editarTreino(vector<ficha>& listaAlunos){

    if(listaAlunos.empty()){
        cout << "Nenhum aluno cadastrado no sistema\n";
        return;
    }

    string nomePesquisa;

    bool encontrou =  false;

    cout << "Informe o nome do aluno que deseja editar o treino: ";
    getline(cin, nomePesquisa);

    for(size_t i = 0; i < listaAlunos.size(); i++){
        if(listaAlunos[i].nome == nomePesquisa){
            encontrou = true;

            int opcaoTreino;
            cout << "=== EDITAR TREINO ===\n";
            cout << "1 - Adicionar exercicio\n";
            cout << "2 - Remover exercicio\n";
            cin >> opcaoTreino;

            for(size_t j = 0; j < listaAlunos[i].listaExercicios.size(); j++){
                cout << "--- Exercicio " << j + 1 << " ---\n";
                cout << "Nome do exercicio: " << listaAlunos[i].listaExercicios[j].exercicio << "\n";
                cout << "Divisao: " << listaAlunos[i].listaExercicios[j].divisao << "\n";
                cout << "Quantidade de series: " << listaAlunos[i].listaExercicios[j].series << "\n";
                cout << "Quantidade de repeticoes: " << listaAlunos[i].listaExercicios[j].reps << "\n";
            };

            switch(opcaoTreino){
                case 1:{
                    treino novoExercicio;
                    
                    cout << "Informe a divisao do exercicio (ex: upper, lower, fullbody): \n";
                    getline(cin, novoExercicio.divisao);
                    cout << "Informe o nome do exercicio: \n";
                    getline(cin, novoExercicio.exercicio);
                    cout << "Informe a quantidade de series: \n";
                    cin >> novoExercicio.series;
                    if(novoExercicio.series <= 0){
                        cout << "Quantidade de series invalida!! Treino em branco.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        break;
                    }
                    cout << "Informe a quantidade de repeticoes: \n";
                    cin >> novoExercicio.reps;
                    if(novoExercicio.reps <= 0){
                        cout << "Quantidade de repeticoes invalida!! Treino em branco.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        break;
                    }
                    listaAlunos[i].listaExercicios.push_back(novoExercicio);
                    break;
                }
                case 2:{
                    if(listaAlunos[i].listaExercicios.empty()){
                        cout << "Nenhum exercicio cadastrado para este aluno\n";
                        break;
                    }

                    string remover;
                    cout << "Informe o nome do exercicio que deseja remover: \n";
                    getline(cin, remover);

                    bool encontro = false;
                    for(size_t j = 0; j < listaAlunos[i].listaExercicios.size(); j++){
                        if(listaAlunos[i].listaExercicios[j].exercicio == remover){
                            encontro = true;
                            listaAlunos[i].listaExercicios.erase(listaAlunos[i].listaExercicios.begin() + j);
                            cout << "Exercicio removido com sucesso!\n";
                            break;
                        }
                    }
                    if(!encontro){
                        cout << "Exercicio nao encontrado!\n";
                    };
                    break;
                }
                default:{
                    cout << "Opcao invalida!\n";
                    break;
                }
            }
        };
    };

    if(!encontrou){
        cout << "Aluno nao consta no sistema\n";
    } 
}

void apagarAluno(vector<ficha>& listaAlunos){

    if(listaAlunos.empty()){
        cout << "Nenhum aluno cadastrado no sistema\n";
        return;
    }

    string nomePesquisa;

    bool encontrou =  false;

    cout << "Informe o nome do aluno que deseja apagar: ";
    getline(cin, nomePesquisa);

    for(size_t i = 0; i < listaAlunos.size(); i++){
        if(listaAlunos[i].nome == nomePesquisa){
            encontrou = true;
            listaAlunos.erase(listaAlunos.begin() + i);
            cout << "Aluno removido com sucesso!\n";
            break;
        };
    };

    if(!encontrou){
        cout << "Aluno nao consta no sistema\n";
    } 
}   

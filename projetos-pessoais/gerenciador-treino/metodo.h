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
        arquivo.ignore();

        size_t qtdEx = 0;
        arquivo >> qtdEx;
        arquivo.ignore();

        aluno.listaExercicios.clear();
        for (size_t j = 0; j < qtdEx; j++) {
            treino item;
            getline(arquivo, item.exercicio);
            getline(arquivo, item.divisao);

            arquivo >> item.reps;
            arquivo.ignore();

            arquivo >> item.series;
            arquivo.ignore();

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
        arquivo << listaAlunos[i].nome << ",";
        arquivo << listaAlunos[i].data_nas << ",";
        arquivo << listaAlunos[i].data_ins << ",";
        arquivo << listaAlunos[i].goals << ",";
        arquivo << listaAlunos[i].genero << ",";
        arquivo << listaAlunos[i].divisao << ",";
        arquivo << listaAlunos[i].idade << ",";

        size_t qtdEx = listaAlunos[i].listaExercicios.size();
        arquivo << qtdEx << ",";

        for (size_t j = 0; j < qtdEx; j++) {
            arquivo << listaAlunos[i].listaExercicios[j].exercicio << ",";
            arquivo << listaAlunos[i].listaExercicios[j].divisao << ",";
            arquivo << listaAlunos[i].listaExercicios[j].reps << ",";
            arquivo << listaAlunos[i].listaExercicios[j].series << ",";
        }
        arquivo << "\n";
    }

    arquivo.close();
}

void cadastrarAluno(vector<ficha>& listaAlunos){

    ficha novoAluno;

    cout << "=== NOVO ALUNO ===\n";

    cout << "Informe o nome do aluno: \n";
    getline(cin, novoAluno.nome);
    

    cout << "Informe o genero: \n";
    getline(cin, novoAluno.genero);
    

    cout << "Informe a idade: \n";
    cin >> novoAluno.idade;
    cin.ignore();

    if(novoAluno.idade <= 0){
        cout << "Idade invalida!! Tente novamente.\n";
        cin.clear();
        return;
    }
    if(novoAluno.idade < 12){
        cout << "Idade nao permitida para treino\n";
        cin.clear();
        return;
    }
    

    cout << "Objetivo na academia (ex: Hipertrofia, Emagrecimento): \n";
    getline(cin, novoAluno.goals);

    cout << "Data de nascimento (dd/mm/aa): \n";
    getline(cin, novoAluno.data_nas);
    

    cout << "Data de inscricao (dd/mm/aa): \n";
    getline(cin, novoAluno.data_ins);
    

    char montarTreino;

    cout << "Deseja montar o treino agora S/N? ";
    cin >> montarTreino;
    cin.ignore();

    if(montarTreino == 's' || montarTreino == 'S'){
        
        int opcaoTreino;

        do{
            cout << "--- Escolha a divisao de treino do aluno ---";
            cout << "1 - ABC(Push/Pull/Leg)";
            cout << "2 - ABCD(Upper/Low)";
            cout << "3 - ABCDE";
            cout << "4 - Upper/Low";
            cout << "5 - Full Body";
            cin opcaoTreino;
            cin.ignore();

            switch{
                case 1:{
                    treino push; pull; leg;

                    cout << "--- ABC(Push/Pull/Leg) ---\n";
                    
                    cout << "-- PUSH --\n";
                    do{
                        cout << "Informe o nome do exercicio (0 para sair): ";
                        getline(cin, push.divisao);

                        cout << "Informe a quantidade de series (0 para sair): ";
                        cin >> push.divisao;
                        cin.ignore();

                        cout << "Informe a quantidade de repeticoes (0 para fechar): ";
                        cin >> push.divisao;
                        cin.ignore();

                    }while(push = 0);
                    
                    cout << "-- PULL --\n";
                    do{
                        cout << "Informe o nome do exercicio (0 para sair): ";
                        getline(cin, pull.divisao);

                        cout << "Informe a quantidade de series (0 para sair): ";
                        cin >> pull.divisao;
                        cin.ignore();

                        cout << "Informe a quantidade de repeticoes (0 para sair): ";
                        cin << pull.divisao;
                        cin.ignore();

                    }while(pull = 0);

                    cout << "-- LEGS --\n";
                    do{
                        cout << "Informe o nome do exercicio (0 para sair): ";
                        getline(cin, leg.divisao);

                        cout << "Informe a quantidade de series (0 para sair): ";
                        cin >> leg.divisao;
                        cin.ignore();

                        cout << "Informe a quantidade de repeticoes (0 para sair): ";
                        cin << leg.divisao;
                        cin.ignore();

                    }while(leg = 0);
                }
                case 2: {
                    treino upper1, low1, upper2, low2;

                    cout << "--- UPPER 1 ---\n";

                    do{
                        cout << "Informe o nome do exercicio (0 para sair): ";
                        getline(cin, upper1.divisao);

                        cout << "Informe a quantidade de series (0 para sair): ";
                        cin >> upper1.divisao;
                        cin.ignore();

                        cout << "Informe a quantidade de repeticoes (0 para sair): ";
                        cin.ignore();

                    }while(upper1 = 0);

                    cout << "--- LOW 1 ---\n";

                    do{

                        treino low1;

                        cout << "Informe o nome do exercicio (0 para sair): ";
                        getline(cin, low1.divisao);

                        cout << "Informe o numero de series (0 para sair): ";
                        cin >> low1.divisao;
                        cin.ignore();

                        cout << "Informe o numero de repeticoes (0 para sair): ";
                        cin >> low1.divisao;
                        cin.ignore();

                    }while(low1 = 0);

                    cout << "--- UPPER 2 ---\n";

                    do{
                        cout << "Informe o nome do exercicio (0 para sair): ";
                        getline(cin, low2.divisao);

                        cout << "Informe o numero de series (0 para sair): ";
                        cin >> low2.divisao;
                        cin.ignore();

                        cout << "Informe o numero de repeticoes (0 para sair): ";
                        cin >> low2.divisao;
                        cin.ignore();
                    }

                }
            }
        }

        int qtdexercicios;
        cout << "Informe a quantidade de exercicios que deseja cadastrar: \n";
        cin >> qtdexercicios;
        cin.ignore();
        if (qtdexercicios <= 0){
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
                cin >> itemTreino.series;
                cin.ignore();
                if(itemTreino.series <= 0){
                    cout << "Quantidade de series invalida!! Treino em branco.\n";
                    cin.clear();
                    break;
                }

                cout << "Informe a quantidade de repeticoes: \n";
                cin >> itemTreino.reps;
                cin.ignore();
                if(itemTreino.reps <= 0){
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

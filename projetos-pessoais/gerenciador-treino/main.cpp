#include <iostream>
#include <string>
#include <vector>
#include "metodo.h"

using namespace std;

int main() {
    vector<ficha> listaAlunos;
    carregarBase(listaAlunos);

    int opcao;

    do {
        cout << "\n=== Menu de Academia ===\n";
        cout << "1 - Cadastrar Aluno\n";
        cout << "2 - Listar alunos\n";
        cout << "3 - Consultar aluno\n";
        cout << "4 - Montar/Editar treino\n";
        cout << "5 - Apagar dados de aluno\n";
        cout << "6 - Encerrar sistema\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cadastrarAluno(listaAlunos);
                atualizarBase(listaAlunos);
                break;

            case 2:
                listarAlunos(listaAlunos);
                break;

            case 3:
                consultarAluno(listaAlunos);
                break;

            case 4:
                editarTreino(listaAlunos);
                atualizarBase(listaAlunos);
                break;

            case 5:
                apagarAluno(listaAlunos);
                atualizarBase(listaAlunos);
                break;

            case 6:
                cout << "Encerrando sistema...\n";
                break;

            default:
                cout << "Opcao invalida! Tente novamente.\n";
                break;
        }

    } while (opcao != 6);

    return 0;
}

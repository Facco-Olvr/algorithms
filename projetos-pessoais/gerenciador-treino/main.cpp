
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include "academia.h"

using namespace std;

int main(){
    vector<ficha> listaAlunos;
    int opcao;

    do{

        cout << "=== Menu de Academia ===\n";
        cout << "1 - Cadastrar Aluno\n";
        cout << "2 - Listar alunos\n";
        cout << "3 - Exibir ficha de aluno\n";
        cout << "4 - Apagar dados de aluno\n";
        cout << "5 - Encerrar sistema\n";
        cin >> opcao;

        switch (opcao){
            
            case 1:

        }
    } while(opcao != 5);

    return 0;
}


#include <iostream>
#include <vector>
#include <limits>

using namespace std;

typedef struct{
    string nome;
    int matricula;
    float n1, n2;
}aluno;

int main() {
    vector<aluno> cadastro;
    int opcao;

    do{
        system("cls");
        cout << "MENU\n";
        cout << "1 - cadastrar aluno e avaliacoes\n";
        cout << "2 - listar alunos\n";
        cout << "3 - sair\n";
        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){
            case 1: {
                string nome;
                int matricula;
                float n1, n2;

                cout << "\n -- CADASTRO DE ALUNO --\n";
                cout << "informe o nome do aluno:\n";
                getline(cin, nome);
                cout << "informe o numero de matricula\n";
                cin >> matricula;
                cout << "informe a nota da avaliacao 1 e 2:\n";
                cin >> n1 >> n2;

                cadastro.push_back({nome, matricula, n1, n2});

                cout << "aluno cadastrado com sucesso!!\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
                break;
            }
            case 2: {
                if(cadastro.empty()){
                    cout << "nenhum estudante cadastrado\n";
                } else {
                    cout << "--LISTA DE ALUNOS--";

                    for(int i = 0; i < cadastro.size(); i++){
                        float media = (cadastro[i].n1 + cadastro[i].n2) / 2.0;
                        cout << "\nmatricula: " << cadastro[i].matricula
                             << " | aluno: " << cadastro[i].nome
                             << " | media: " << media;
                    }
                }
                break;
            }    
            case 3: { 
                cout << "\nsaindo do programa\n";
                break;
            }    
            default: {
                cout << "\nopcao invalida... pressione qualquer tecla para continuar";
                cin.get();
                break;
            }
            }
        system("pause");
    } while(opcao != 3);

    return 1;
    
}

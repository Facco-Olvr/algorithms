#include<iostream>
#include<vector>
#include<limits>

using namespace std;

typedef struct {
    int id;
    int pontos;
} jogador;

int main(){
    vector<jogador> sistema;
    int opcao;

    do{

        system("cls");
        cout << "============\n";
        cout << "--- MENU ---\n";
        cout << "============\n";
        cout << "1 - Cadastrar jogador\n";
        cout << "2 - Buscar jogador (ID)\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao\n";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcao){

            case 1: {
                int id; 
                int pontos;

                cout << "Informe a ID do jogador: \n";
                cin >> id;

                cout << "Informe a pontuacao do jogador: \n";
                cin >> pontos;

                sistema.push_back({id, pontos});

                cout << "Jogador casdastrado com sucesso!!\n";

                break;
            }

            case 2: {
                int id_busca;

                if(sistema.empty()){
                    cout << "Nenhum jogador no sistema!!\n";

                } else {
                    bool encontrado = false;

                    cout << "Informe a ID do jogador: \n";
                    cin >> id_busca;

                    for(size_t i = 0; i < sistema.size(); i++){
                        if(id_busca == sistema[i].id){

                            cout << "\n--- Jogador encontrado ---\n";
                            cout << "ID: " << sistema[i].id << "\n";
                            cout << "Pontuacao do jogador: " << sistema[i].pontos << "\n";
                            encontrado = true;

                        } 
                    }

                    if(!encontrado){
                        cout << "Jogador nao encontrado!!\n";
                    }
                }

                break;
            }

            case 3: {
                cout << "Saindo!!\n";

                break;
            }

            default: {
                cout << "Opcao invalida!!\n";

                break;
            }
        }
        system("pause");

    } while (opcao != 3);

    return 0;
}

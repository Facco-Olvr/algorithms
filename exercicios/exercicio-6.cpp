#include<iostream> 
#include<vector>
#include<limits>
#include<string>

using namespace std;

typedef struct {
    string name;
    int cod;
    double peso;
    double altura;
} perfil;

int main(){
    int opcao;
    vector<perfil> sistema;

    do{ 
        system("cls");
        cout << "--MENU--\n";
        cout << "1 - Cadastrar aluno: \n";
        cout << "2 - exibir aluno mais alto\n";
        cout << "3 - sair\n";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){
            case 1: {
                string name;
                int cod;
                double peso;
                double altura;

                cout << "informe o nome do aluno: \n";
                getline(cin, name);
                cout << "designe um codigo para o aluno: \n";
                cin >> cod;
                cout << "informe o peso do aluno: \n";
                cin >> peso;
                cout << "informe a altura do aluno: \n";
                cin >> altura;

                sistema.push_back({name, cod, peso, altura});

                cout << "Aluno cadastrado com sucesso!!";

                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();

                break;
            }
            
            case 2: {
                if(sistema.empty()){
                    cout << "nenhum aluno cadastrado no sistema!!\n";
                } else {

                    bool encontrado = false;
                    double mais_alto = sistema[0].altura;
                    int indice_mais_alto = 0;

                    for(int i = 0; i < sistema.size();  i++){
                        if(sistema[i].altura > mais_alto){
                            mais_alto = sistema[i].altura;
                            indice_mais_alto = i;

                        }
                    }

                    cout << "-- Aluno mais alto --\n";
                    cout << "Nome: " << sistema[indice_mais_alto].name << "\n";
                    cout << "Codigo: " << sistema[indice_mais_alto].cod << "\n";
                    cout << "Peso: " << sistema[indice_mais_alto].peso << "\n";
                    cout << "Altura: " << sistema[indice_mais_alto].altura << "\n";
                }

                cin.get();
                break;
            }

            case 3: {
                cout << "saindo do programa!!\n";

                break;
            }

            default: {  
                cout << "Opcao invalida!! Tente novamente.";
                cin.get();
                break;
            }

        }system("pause");

    } while(opcao != 3);

    return 0;
}

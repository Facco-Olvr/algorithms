#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

typedef struct {
    int codigo;
    int quantidade;
    float preco;
    string nome;
} Produto;

int main() {
    vector<Produto> estoque;
    int opcao;

    do {
        system("cls"); // Use system("clear") se estiver no Linux/Mac
        cout << "Menu:\n";
        cout << "1. Cadastrar produto\n";
        cout << "2. Exibir o valor total investido no estoque de um produto\n"; 
        cout << "3. Sair\n";
        cout << "Escolha uma opcao: ";  
        cin >> opcao;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        switch(opcao) {
            case 1: {
                int codigo, quantidade;
                float preco;
                string nome;

                cout << "\n--- Cadastro de Produto ---\n";
                cout << "Digite o nome do produto: ";
                getline(cin, nome);
                cout << "Digite o codigo do produto: ";
                cin >> codigo;
                cout << "Digite a quantidade do produto: ";
                cin >> quantidade;
                cout << "Digite o preco do produto: ";
                cin >> preco;
                
                estoque.push_back({codigo, quantidade, preco, nome});

                cout << "\nProduto cadastrado com sucesso!\n";
                cout << "Pressione Enter para continuar...";
                cin.get();
                break;
            }

            case 2: {
                string buscanome;

                cout << "\nDigite o nome do produto para saber o valor em estoque: ";
                getline(cin, buscanome);

                bool encontrado = false;
                for(int i = 0; i < estoque.size(); i++){
                    if(estoque[i].nome == buscanome){
                        float valortotal = estoque[i].quantidade * estoque[i].preco;
                        cout << "Valor total em estoque para " << estoque[i].nome << ": R$ " << valortotal << endl;
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) {
                    cout << "Produto nao encontrado.\n";
                }

                cout << "\nPressione Enter para continuar...";
                cin.get();
                break;
            }

            case 3: {
                cout << "\nSaindo do programa.\n";
                break;
            }

            default: {
                cout << "\nOpcao invalida! Pressione Enter para continuar...";
                cin.get();
                break;
            }
        }

    } while(opcao != 3);

    return 0;
}

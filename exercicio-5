#include <iostream>
#include <limits>
#include <vector>
#include <string>

using namespace std;

typedef struct {
    string nome_mar;
    int cod;
    int ano;
    float preco;
} carro;

int main(){
    int opcao;
    vector<carro> catalogo;

    do { 
        system("cls");
        cout << "--MENU--\n";
        cout << "1 - cadastrar veiculo\n";
        cout << "2 - filtrar por preco (valor maximo)\n";
        cout << "3 - sair\n";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){
            case 1: {
                string nome_mar;
                int cod;
                int ano;
                float preco;

                cout << "informe o modelo e a marca do carro: \n";
                getline(cin, nome_mar);
                cout << "informe o codigo: \n";
                cin >> cod;
                cout << "informe o ano de lancamento: \n";
                cin >> ano;
                cout << "Informe o preco: \n";
                cin >> preco;

                catalogo.push_back({nome_mar, cod, ano, preco});

                cout << "carro cadastrado com sucesso!!\n";

                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();

                break;
            } 

            case 2: {
                float teto;

                if(catalogo.empty()){
                    cout << "nenhum veiculo registrado.\n";
                    cin.get();
                    break; 
                } 
                
                cout << "informe o valor teto do preco: \n";
                cin >> teto;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                bool encontrado = false;

                for(size_t i = 0; i < catalogo.size(); i++){
                    if(catalogo[i].preco <= teto){
                        cout << "Modelo/Marca: " << catalogo[i].nome_mar << "\n";
                        cout << "Codigo: " << catalogo[i].cod << "\n";
                        cout << "Ano: " << catalogo[i].ano << "\n";
                        cout << "Preco: R$ " << catalogo[i].preco << "\n";
                        cout << "--------------------------\n";
                        encontrado = true;
                    }
                }

                if(!encontrado){
                    cout << "nenhum veiculo cadastrado com esse teto de preco!!\n";
                }
                
                cin.get();
                break;
            }
            
            case 3: {
                cout << "\nsaindo do programa!!\n";
                break;
            }    
            
            default: {
                cout << "\nopcao invalida!! pressione qualquer tecla para continuar. \n";
                cin.get();
                break;
            }
        } 
        
    } while (opcao != 3);

    return 0;
}

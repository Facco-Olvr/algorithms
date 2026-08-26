#include<iostream>
#include<string>
#include<vector>
#include<limits>

using namespace std;

typedef struct{
    string name;
    int num_conta;
    double saldo;
} conta;

int main() {
    vector<conta> sistema;
    int opcao;

    do{

        system("cls");
        cout << "============\n";
        cout << "--- MENU ---\n";
        cout << "============\n";
        cout << "1 - Cadastrar conta \n";
        cout << "2 - Depositar \n";
        cout << "3 - Mostrar todas as contas \n";
        cout << "4 - Sair \n";
        cout << " Escolha uma opcao\n";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){
            case 1: {
                string name;
                int num_conta; 
                double saldo;

                cout << "Informe o nome do titular da conta bancaria: \n";
                getline(cin, name);
                cout << "Informe o numero da conta bancaria: \n";
                cin >> num_conta;
                cout << "Informe o saldo incial da conta: R$ \n";
                cin >> saldo;
                
                sistema.push_back({name, num_conta, saldo});

                cout << "Conta cadastrada com sucesso!!! \n";

                break;
            }

            case 2: {
                if(sistema.empty()){
                    cout << "Nenhuma conta bancária no sistema!! \n";
                    break;
                }

                int indice;
                double valor_deposito;

                cout << "\n --- Realizar depósito ---\n";
                cout << "Informe a conta que deseja depositar: \n";
                cout << "Contas disponiveis (Posicoes de 0 a " << sistema.size() + 1 << "): \n";
                
                for(size_t i = 0; i < sistema.size(); i++){
                    cout << "Posicao de [" << i + 1 << "] -> Conta: " << sistema[i].num_conta 
                    << "| Titular: " << sistema[i].name 
                    << "| Saldo: R$ " << sistema[i].saldo << "\n";
                }

                cout << "Escolha uma posicao (indice) da conta: \n";
                cin >> indice; 

                if(indice >= 0 && static_cast<size_t>(indice) < sistema.size()){
                    cout << "Digite o valor a depositar: R$\n";
                    cin >> valor_deposito;

                    if(valor_deposito > 0){
                        sistema[indice].saldo += valor_deposito;
                        cout << "Valor depositado com sucesso!! Novo saldo: R$" << sistema[indice].saldo << "\n";

                    } else {
                        cout << "Valor do deposito invalido!! \n";
                    }

                } else {
                    cout << "Indice invalido!! \n";
                }  

                break;
            } 

            case 3: {
                if(sistema.empty()){
                    cout << "Nenhuma conta cadastrada no sistema!! \n";
                } else {
                    cout << "--- Contas bancarias no sistema --- \n";
                    for(size_t i = 0; i < sistema.size(); i++){
                        cout << "\nPosicao: [" << i + 1 << "]\n";
                        cout << "Nome: " << sistema[i].name << "\n";
                        cout << "Numero da conta: " << sistema[i].num_conta << "\n";
                        cout << "Saldo: R$ " << sistema[i].saldo << "\n";
                        cout << "\n";
                    }
                }

                break;
            }

            case 4: {
                cout << "Saindo!! \n";
                break;
            }

            default: {
                cout << "Opcao invalida \n";
                break;
            }
        }
        
        system("pause");

    } while(opcao != 4);

    return 1;
}

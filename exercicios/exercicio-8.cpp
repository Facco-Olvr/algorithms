#include<iostream>
#include<vector>
#include<limits>
#include<iomanip>


using namespace std;

typedef struct {
    int num_imovel;
    float consumo_kwh;
}imovel;

int main(){
    int opcao;
    vector<imovel> rua;
    float media = 0;

    do{

        system("cls");
        cout << "============\n";
        cout << "--- Menu ---\n";
        cout << "============\n";
        cout << "1 - Cadastrar imovel: \n";
        cout << "2 - Calcular a media de consumo da rua: \n";
        cout << "3 - Exibir imoveis que consumem acima da media: \n";
        cout << "4 - Encerrar programa.\n";
        cout << "Escolha uma opcao: \n";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){

            case 1: {
                int num_imovel;
                float consumo_kwh;

                cout << "Informe o numero do imovel: \n";
                cin >> num_imovel;

                cout << "Informe o consumo(kwh) do imovel: \n";
                cin >> consumo_kwh;

                rua.push_back({num_imovel, consumo_kwh});

                cout << "Imovel cadastrado com sucesso!! \n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
                break;
            }

            case 2: {

                if(rua.empty()){
                    cout << "Nenhum imovel cadastrado!! \n";
                    break;

                } else {
                    float soma = 0;
                    for(size_t i = 0; i < rua.size(); i++){
                        soma += rua[i].consumo_kwh;
                    }

                    media = soma / rua.size();

                    cout << fixed << setprecision(2);
                    cout << "A media de consumo da rua e: " << media << "(kwh) \n";
    
                }
                break;
            }

            case 3: {
                if(rua.empty()){
                    cout << "Nenhum imovel cadastrado!!\n";
                } else if(media == 0){
                    cout << "Calcule a media primeiro \n";
                } else {

                    bool encontrado = false;

                    cout << "-- Imoveis com consumo acima da media --\n";
                    cout << "========================================\n";

                    for(size_t i = 0; i < rua.size(); i++){
                        if(rua[i].consumo_kwh > media){
                            cout << "Numero do imovel: " << rua[i].num_imovel << "\n";
                            cout << "Consumo: " << rua[i].consumo_kwh << "(khw)\n";
                            cout << "----------------------------------------\n";
                            encontrado = true;
                        }
                    }

                    if(!encontrado){
                        cout << "Nenhum imovel acima da media!!\n";
                    }
                }
                cin.get();
                break;
            }

            case 4: {
                cout << "Encerrando o programa!!\n";
                break;
            }

            default: {
                cout << "Opcao invalida!!\n";
                break;
            }
        }
        system("pause");

    } while(opcao != 4);

    return 1;
}

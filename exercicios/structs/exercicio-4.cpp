#include<iostream>
#include<limits>
#include<vector>
#include<string>

using namespace std;

typedef struct{
    string nome;
    int codigo;
    int anopub;
    int pagqtd;
} livro;

int main() {

    vector<livro> biblioteca;
    int opcao;

    do{ 
        cout << "== MENU ==\n";
        cout << "1 - cadastrar livro\n";
        cout << "2 - filtrar livros (publicados a partir de X ano)\n";
        cout << "3 - sair\n";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        switch(opcao){
            case 1: {
                string nome;
                int codigo;
                int anopub;
                int pagqtd;

                cout << "\nDigite o nome do livro a ser cadastrado:\n";
                getline(cin, nome);
                cout << "\nDigite o codigo do livro:\n";
                cin >> codigo;
                cout << "\nDigite o ano de publicacao: \n";
                cin >> anopub;
                cout << "\nDigite a quantidade de paginas:\n";
                cin >> pagqtd;

                biblioteca.push_back({nome, codigo, anopub, pagqtd});

                cout << "\nLivro cadastrado com sucesso!!\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
                break;
            }
            case 2: {
                if(biblioteca.empty()){
                    cout << "\nnenhum livro cadastrado\n";  
                } else {
                    cout << "\n===LIVROS LANCADOS A PARTIR DE 2020===\n ";

                    bool encontrado = false;
                    for(size_t i = 0; i < biblioteca.size(); i++){
                        if(biblioteca[i].anopub >= 2020){
                            cout << "-" << biblioteca[i].nome 
                                 <<  "(ano: " << biblioteca[i].anopub
                                 <<  " | codigo: " << biblioteca[i].codigo
                                 <<  " | paginas: " <<biblioteca[i].pagqtd << ")\n";
                            encontrado = true;
                        }
                    }
                }
                break;
            }
            case 3: {
                cout << "\nsaindo do programa!!\n";
                break;
            }
            default: {
                cout << "\nopcao invalida!! tente novamente.\n";
                break;
            }
        } 
    }while (opcao!= 3);

    return 1;
}

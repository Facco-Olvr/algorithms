#include<iostream>
#include<string>
#include<limits>
#include<vector>
#include<chrono>
#include<thread>

using namespace std;

void escrever(string texto){
    for(char letra : texto){
        cout << letra << flush;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
}

typedef struct{
    string nome;
    int vida;
    int ataque;
}Classe;

int main(){
    vector<Classe> classes = {
        {"guerreiro", 120, 20},
        {"arqueiro", 100, 25},
        {"mago", 80, 30}
    };

    string prota;
    int escolha;

    // Criacao de personagem

    system("cls");
    escrever ("--- RPG ---\n");

    escrever("Bem-vindo, aventureiro!!\n");
    escrever("Antes de começar a sua jornada...\n\n");
    
    escrever ("Escolha o nome do seu personagem: \n");
    cout << ">";
    cin >> prota;
    cin.ignore(numeric_limits<streamsize>::max(), "\n");

    // Escolha de classe

    cout << "Escolha sua classe: \n";

    do{

        for(size_t i = 0; i < classes.size(); i++){
            cout << i + 1 << " - "
                << classes[i].nome
                << " | Vida: " << classes[i].vida
                << " | Ataque: " << classes[i].ataque
                << "\n";
       };

        cout << "\n";
        cin >> escolha;

        if(escolha < 0 || escolha > 2){
            escrever("Opção inválida!! Tente outra vez");
        }

    }while(escolha < 1 || escolha > 3);

    escolha--;

    escrever("\nVocê escolheu sua classe!\n");
    escrever("Sua aventura está prestes a começar...\n");

    // Informacoes acerca de personagem

    cout << "--- PERSONAGEM ---\n";
    cout << "Nome: " << prota << "\n";
    cout << "Classe: " << classes[escolha].nome << "\n";
    cout << "Vida: " << classes[escolha].vida << "\n";
    cout << "Ataque: " << classes[escolha].ataque << "\n";

    system("pause");

    return 0;
}

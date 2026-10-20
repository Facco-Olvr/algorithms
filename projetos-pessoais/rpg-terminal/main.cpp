#include<iostream>
#include<string>
#include<chrono>
#include<vector>
#include "personagem.h"

using namespace std;

void escrever(string texto){
    for(char letra : texto){
        cout << letra << flush;
        this_thread::sleep_for(chrono::milliseconds(30));
    }
}

struct classe{
    string nome;
    int vida;
    int ataque;
};

int main(){
    vector<classe> menuclasse = {
        {"Guerreiro", 120, 20};
        {"Arqueiro", 100, 25};
        {"Mago", 80, 30}
    }

    string prota;
    int opcao;

    system << "cls";
    escrever << "----RPG----\n";
    escrever << "Bem vindo, aventureiro!!\n
    escrever << "Antes de dar inicio a sua jornada...\n\n";
    escrever << "Escolha o nome do seu personagem: ";
    getline(cin, prota);

    escrever << "Escolha sua classe: ";

    for(int i = 0; i < menuclasse.size(); i++){
        cout << "Classe: " << menuclasse[i].nome << "\n";
        cout << "Vida: " << menuclasse[i].vida << "\n";
        cout << "Dano: " << menuclasse[i].ataque << "\n";
        }
}

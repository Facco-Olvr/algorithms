#include<iostream>
#include "personagem.h"

using namespace std;

personagem::personagem(string pnome, string pclasse, int pvida, int pataque){
    nome = pnome;
    classe = pclasse;
    vida = pvida;
    vidamaxima = pvida;
    ataque = pataque;
}

void personagem::exibirstatus(){
    
    cout << "-------Atributos De Personagem-------\n";
    cout << "Nome: " << nome;
    cout << "Classe: " << classe << "\n"

}

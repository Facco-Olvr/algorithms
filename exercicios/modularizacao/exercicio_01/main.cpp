#include<iostream>
#include<string>
#include "funcoes.h"

using namespace std;

int main(){
    string palavra;
    char letra;

    cout << "Digite a palavra: ";
    cin >> palavra;

    cout << "Digite a letra que deseja encontrar: ";
    cin >> letra;

    int quantidade = contarletra(palavra, letra);

    cout << "A letra '" << letra << "' aparece '" << quantidade << "' vez(es)"<< "\n";

    return 0;
}

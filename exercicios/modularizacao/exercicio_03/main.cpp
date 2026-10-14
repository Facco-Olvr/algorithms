#include <iostream>
#include <string>

  int main(){
    string frase;

    cout << "Escreva uma frase: ";
    getline(cin, frase); // getline pega a frase inteira com espaços

    int total = contarVogais(frase);

    cout << "A quantidade de vogais e: " << total << endl;

    return 0;
}

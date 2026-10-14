#include <iostream>
#include <string>

using namespace std;

// O método do seu amigo
int contarVogais(string frase){ 
    int contador = 0;

    for(int i = 0; i < frase.size(); i++){
        if (frase[i] == 'a' || frase[i] == 'A') {
            contador++;
        }
        else if (frase[i] == 'e' || frase[i] == 'E') {
            contador++;
        }
        else if (frase[i] == 'i' || frase[i] == 'I') {
            contador++;
        }
        else if (frase[i] == 'o' || frase[i] == 'O') {
            contador++;
        }
        else if (frase[i] == 'u' || frase[i] == 'U') {
            contador++;
        }
    }
    return contador;
}

#include <iostream>
#include <string>
#include <cctype> // Necessário para a função toupper funcionar

using namespace std;

string converter_para_maiusculo(string frase){
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]);
    }   
    
    return frase;
}

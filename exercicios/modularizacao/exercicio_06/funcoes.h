#include <iostream>
#include <string>

using namespace std;

string extrairPrimeiroNome(string nomeCompleto) {
    string primeiroNome = "";

    for (int i = 0; i < nomeCompleto.size(); i++) {
        if (nomeCompleto[i] == ' ') {
            break; 
        }
        primeiroNome = primeiroNome + nomeCompleto[i];
    }

    return primeiroNome;
}

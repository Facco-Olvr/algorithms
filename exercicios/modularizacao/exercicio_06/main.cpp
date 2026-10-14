#include <iostream>
#include <string>

int main() {
    string nomeCompleto;

    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto);

    string resultado = extrairPrimeiroNome(nomeCompleto);

    cout << "O primeiro nome e: " << resultado << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <cctype> // Necessário para a função toupper funcionar

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    string resultado = converter_para_maiusculo(frase);

    cout << "Frase em maiuscula: " << resultado << endl;

    return 0;
}

#include<iostream>

int main() {
    // Exemplo de vetor ordenado
    int vetor1[] = {1, 3, 5, 7, 9};
    int tam1 = 5;

    // Exemplo de vetor desordenado
    int vetor2[] = {4, 2, 9, 1, 5};
    int tam2 = 5;

    // Testando o vetor 1
    if (estaOrdenado(vetor1, tam1)) {
        cout << "Vetor 1: TRUE (Esta ordenado)" << endl;
    } else {
        cout << "Vetor 1: FALSE (Esta desordenado)" << endl;
    }

    // Testando o vetor 2
    if (estaOrdenado(vetor2, tam2)) {
        cout << "Vetor 2: TRUE (Esta ordenado)" << endl;
    } else {
        cout << "Vetor 2: FALSE (Esta desordenado)" << endl;
    }

    return 0;
}

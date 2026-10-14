#include<iostream>
#include<vector>
#include<ctime>
#include "metodo.h"

using namespace std;

int main() {
    vector<int> vetorA;
    vector<int> vetorB;
    vector<int> vetorResultado;

    // Popula os vetores
    popularVetor(vetorA, 6, 1, 10);
    popularVetor(vetorB, 6, 1, 10);

    cout << "Exibindo Vetor A: \n";
    exibirVetor(vetorA);

    cout << "Exibindo Vetor B: \n";
    exibirVetor(vetorB);

    // Chama o exercicio2 atribuindo o resultado ao vetorResultado
    vetorResultado = exercicio2(vetorA, vetorB);

    cout << "Exibindo Vetor Resultado (Valores em comum): \n";
    exibirVetor(vetorResultado);

    return 0;
}

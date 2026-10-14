Use como base os códigos trabalhados:
    - popularVetor()
    - exibirVetor()

1) construa um método chamado exercicio1 que receba como parâmetros:
    - vetorA - com n numeros sorteados
    - vetorB - com n numeros sorteados

   e exiba os números que aparecem nos dois vetores

#include<iostream>
#include<vector>
#include<ctime>
#include "funcoes.h"

using namespace std;

int main() {
    vector<int> vetorA;
    vector<int> vetorB;

    popularvetor(vetorA, 5, 1, 10);
    popularvetor(vetorB, 5, 1, 10);

    cout << "Exibindo Vetor A: \n";
    exibirvetor(vetorA);

    cout << "Exibindo Vetor B: \n";
    exibirvetor(vetorB);

    exercicio1(vetorA, vetorB);

    return 0;
}

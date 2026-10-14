2) construa um método chamado exercicio2 que receba como parâmetros:
    - vetorA - com n numeros sorteados
    - vetorB - com n numeros sorteados
    - vetorResultado - que vai armazenar todos os números que aparecem nos dois vetores

    ao final, o vetorResultado deve ter seus dados retornados.

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

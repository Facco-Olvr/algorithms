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

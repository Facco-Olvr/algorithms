#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

// Função base do professor para popular o vetor
void popularvetor(vector<int> &v, int qtd, int inicio, int fim) {
    srand(time(NULL));
    int numero;
    for (int i = 0; i < qtd; i++) {
        numero = (rand() % (fim - inicio + 1)) + inicio;
        v.push_back(numero);
    }
}

// Função base do professor para exibir o vetor
void exibirvetor(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
    }
    cout << "\n\n";
}

// Método do Exercício 1
void exercicio1(vector<int> vetorA, vector<int> vetorB) {
    cout << "Numeros que aparecem nos dois vetores (intersecao):\n";
    bool encontrouComum = false;

    for (int i = 0; i < vetorA.size(); i++) {
        for (int j = 0; j < vetorB.size(); j++) {
            if (vetorA[i] == vetorB[j]) {
                cout << vetorA[i] << "\t";
                encontrouComum = true;
                break; 
            }
        }
    }

    if (!encontrouComum) {
        cout << "Nenhum numero em comum encontrado.";
    }
    cout << "\n\n";
}

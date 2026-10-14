#include<iostream>
#include<ctime>
#include<vector> 

using namespace std;

void popularVetor(vector<int> &v, int qtd, int inicio, int fim) {
    srand(time(NULL));
    int numero;
    for (int i = 0; i < qtd; i++) {
        numero = (rand() % (fim - inicio + 1)) + inicio;
        v.push_back(numero);
    }
}

// Função base do professor para exibir o vetor
void exibirVetor(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
    }
    cout << "\n\n";
}

// NOVO MÉTODO (Exercício 2): Retorna um vetor com a intersecção dos dois vetores
vector<int> exercicio2(vector<int> vetorA, vector<int> vetorB) {
    vector<int> vetorResultado;

    for (int i = 0; i < vetorA.size(); i++) {
        for (int j = 0; j < vetorB.size(); j++) {
            if (vetorA[i] == vetorB[j]) {
                // Evita duplicatas caso o número apareça várias vezes
                bool jaExiste = false;
                for (int k = 0; k < vetorResultado.size(); k++) {
                    if (vetorResultado[k] == vetorA[i]) {
                        jaExiste = true;
                        break;
                    }
                }
                
                if (!jaExiste) {
                    vetorResultado.push_back(vetorA[i]);
                }
                break; 
            }
        }
    }

    return vetorResultado; // Retorna o vetor preenchido
}

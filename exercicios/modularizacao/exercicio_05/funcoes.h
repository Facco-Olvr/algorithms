#include <iostream>

using namespace std;

// Método que recebe o vetor e o tamanho, retornando true (ordenado) ou false (desordenado)
bool estaOrdenado(int vetor[], int tamanho) {
    // Percorremos até tamanho - 1 para não tentar acessar uma posição inválida na frente
    for (int i = 0; i < tamanho - 1; i++) {
        // Se o elemento atual for maior que o próximo, o vetor está fora de ordem
        if (vetor[i] > vetor[i + 1]) {
            return false; // Encontrou desordem, já retorna falso na hora
        }
    }
    
    return true; // Se o loop terminou sem achar falhas, ele está ordenado!
}

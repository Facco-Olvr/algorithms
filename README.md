ALGORITMOS B 

## 27/07/2026

- Professor: Alexandre Zambelan (alexandrezambelan) --> git

- Conteúdo Principal: structs, modularização e ponteiros.

Introdução ao C++ (Comparativo com C)

#include <iostream>
#include <string>

using namespace std; // Evita a necessidade de usar std:: antes de cout e cin

int main() {
    // Exibindo dados na tela (substituto do printf)
    cout << "Olá, mundo!" << endl;

    // Exibindo variáveis junto com textos
    int idade = 20;
    cout << "Eu tenho " << idade << " anos." << endl;

    // Lendo dados do teclado (substituto do scanf)
    string nome;
    cout << "Digite seu nome: ";
    cin >> variável; // Leitura simples (para uma única palavra)

    // Leitura de frases completas (incluindo espaços)
    cin.ignore(); // Limpa o buffer antes do getline, se necessário
    getline(cin, nome);

    return 0;
}

Atalhos e Comandos Úteis do Terminal

- Ctrl + L: Limpa a tela do terminal.
- Compilação:
 g++ (gcc) nome_do_arquivo.cpp -o programa.exe
- EXECUÇÃO:
 .\programa.exe

## 03/08/2026

Geração de Números Aleatórios
Para trabalhar com valores randômicos em C++, precisamos incluir duas bibliotecas essenciais:

- #include <cstdlib> // Contém a função rand()
- #include <ctime>   // Contém a função time(), usada para semente aleatória

- Exemplo de uso:

srand(time(0)); // Garante que os números gerados sejam diferentes a cada execução
vetor[i] = rand() % 100; // Gera números aleatórios de 0 até 99

PRÁTICAS DE ESTRUTURA DE MENU

int opcao;
do {
    cout << "--- MENU ---" << endl;
    cout << "1. Opcao 1" << endl;
    cout << "2. Opcao 2" << endl;
    cout << "0. Sair" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            // Lógica da opção 1
            break;
        case 2:
            // Lógica da opção 2
            break;
        case 0:
            cout << "Saindo..." << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
    }
} while (opcao != 0);

ALGORITMOS B 

## 27/07/2026

- Professor: Alexandre Zambelan (alexandrezambelan) --> git

- Conteúdo Principal: structs, modularização e ponteiros.

INTRODUÇÃO AO C++ (COMPARATIVO COM C)

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

ATALHOS E COMANDOS ÚTEIS DO TERMINAL

- Ctrl + L: Limpa a tela do terminal.
- Compilação:
 g++ (gcc) nome_do_arquivo.cpp -o programa.exe
- EXECUÇÃO:
 .\programa.exe

## 03/08/2026

GERAÇÃO DE NÚMEROS ALEÁTORIOS 
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

## 10/08/2026

- `push_back`: permite adicionar novos elementos ao vetor sem precisar definir seu tamanho antecipadamente. Dessa forma, o vetor funciona de maneira dinâmica e pode crescer conforme novos dados são inseridos.

- `vetor.size()`: retorna a quantidade de elementos existentes no vetor. Como o tamanho de um vetor dinâmico pode variar, o `size()` é utilizado na condição do `for` para percorrer todos os elementos.

- `#include <string>`: permite trabalhar com textos e strings no programa.

- `#include <vector>`: permite utilizar vetores dinâmicos, que podem aumentar de tamanho conforme novos elementos são adicionados.

- `typedef struct`:
```cpp
typedef struct {
    string placa;
    string cor;
    string horaEntrada;
    string horaSaida;
} Veiculo;

Essa estrutura organiza as informações de cada veículo. Assim, cada carro cadastrado possui sua placa, cor, horário de entrada e horário de saída armazenados.

- vector<Veiculo> garagem: cria um vetor dinâmico chamado garagem, que será responsável por armazenar os veículos cadastrados.
- garagem.push_back({placa, cor, horaEntrada, ""});: adiciona um novo veículo ao vetor garagem. Os dados informados pelo usuário são inseridos e ficam armazenados no vetor para serem utilizados posteriormente.

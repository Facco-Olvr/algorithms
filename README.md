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

- push_back serve para que o vetor não precise ter um tamanho definido inicialmente, permitindo que ele seja dinâmico e aumente conforme novos elementos são adicionados.
- vetor.size() é utilizado para saber quantos elementos existem dentro de um vetor dinâmico. Como não sabemos previamente o tamanho dele, usamos o size() na condição do for para percorrer todos os elementos.
- #include <string> é utilizado para podermos trabalhar com textos e palavras dentro do programa.
- #include <vector> é utilizado para criar e manipular vetores dinâmicos, que podem aumentar de tamanho conforme novos itens são adicionados.

typedef struct {
    string placa;
    string cor;
    string horaEntrada;
    string horaSaida;
} Veiculo;

Essa estrutura foi criada para armazenar as informações de cada veículo. Assim, sempre que um carro for cadastrado na garagem, seus dados, como placa, cor, horário de entrada e horário de saída, ficam organizados nesse modelo.

- vector<Veiculo> garagem cria um vetor dinâmico chamado garagem, que será utilizado para armazenar os veículos cadastrados.
- garagem.push_back({placa, cor, horaEntrada, ""}); adiciona um novo veículo ao vetor garagem. Depois que o usuário informa os dados do carro, o push_back coloca essas informações dentro do vetor, deixando-as armazenadas   para serem utilizadas posteriormente.

📚 Cheat Sheet: Manipulação de Arquivos em C++
Para trabalhar com arquivos em C++, você obrigatoriamente precisa incluir a biblioteca <fstream> (além do <iostream> e <string>).

Os 3 Objetos Principais:
ofstream (Output File Stream): Usado para escrever (criar ou salvar dados) em arquivos.

ifstream (Input File Stream): Usado para ler dados de dentro de arquivos.

fstream: Faz as duas coisas (leitura e escrita), mas para provas acadêmicas geralmente usamos os dois primeiros separados.

1. Escrevendo em um Arquivo (ofstream)
Se o arquivo não existir, o C++ cria ele automaticamente. Se já existir, ele sobrescreve o conteúdo (a menos que você use o modo de append).
```
#include <iostream>
#include <fstream>  // Obrigatório para arquivos!
#include <string>

using namespace std;

int main() {
    // 1. Cria o objeto e abre o arquivo para escrita
    ofstream arquivoSaida("dados.txt");

    // 2. Verifica se o arquivo abriu com sucesso
    if (!arquivoSaida.is_open()) {
        cout << "Erro ao abrir o arquivo para escrita!" << endl;
        return 1;
    }

    // 3. Escreve dados usando o operador << (igual ao cout)
    arquivoSaida << "Linha 1: Olá, mundo dos arquivos!" << endl;
    arquivoSaida << "Linha 2: Salvando dados em C++." << endl;

    // 4. Fecha o arquivo (boa prática acadêmica)
    arquivoSaida.close();

    cout << "Dados salvos com sucesso!" << endl;
    return 0;
}
```

Dica bônus para append (acrescentar sem apagar o que já tem):
Se quiser apenas adicionar no final do arquivo em vez de apagar tudo, abra assim:
ofstream arquivoSaida("dados.txt", ios::app);

2. Lendo de um Arquivo (ifstream)
Para ler o conteúdo de um arquivo linha por linha, usamos a função getline combinada com o arquivo.
```
C++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 1. Abre o arquivo para leitura
    ifstream arquivoEntrada("dados.txt");

    // 2. Verifica se o arquivo realmente existe/abriu
    if (!arquivoEntrada.is_open()) {
        cout << "Erro: Arquivo nao encontrado!" << endl;
        return 1;
    }

    string linha;

    // 3. Lê o arquivo linha por linha até o final (EOF - End Of File)
    while (getline(arquivoEntrada, linha)) {
        cout << "Lido do arquivo: " << linha << endl;
    }

    // 4. Fecha o arquivo
    arquivoEntrada.close();

    return 0;
}
```
3. Resumo dos Passos (Checklist mental)
Incluir bibliotecas: #include <fstream>

Abrir:

Escrita: ofstream nomeObjeto("nome_do_arquivo.txt");

Leitura: ifstream nomeObjeto("nome_do_arquivo.txt");

Validar: if (!nomeObjeto.is_open()) (Ganha ponto com o professor por tratar erros).

Usar:

Escrever: nomeObjeto << variavel;

Ler: getline(nomeObjeto, linha); ou nomeObjeto >> variavel;

Fechar: nomeObjeto.close();

Como subir isso para o seu Git agora em 2 segundos:
Abra o terminal na pasta do seu projeto e digite:

Bash
git add .
git commit -m "Adicionando resumo de manipulacao de arquivos para consulta"
git push origin main

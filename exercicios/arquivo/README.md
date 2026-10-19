# 📂 Manipulação de Arquivos em C++ (`<fstream>`)

Esta pasta contém exercícios, exemplos e anotações sobre como ler, gravar e manipular **arquivos de texto** em C++ utilizando a biblioteca padrão `<fstream>`.

---

## 📚 Conceitos Principais

- **`#include <fstream>`**: Biblioteca necessária para lidar com fluxos de dados de arquivos.
- **`ifstream` (*Input File Stream*):** Utilizado para **leitura** de dados contidos em um arquivo.
- **`ofstream` (*Output File Stream*):** Utilizado para **escrita/criação** de arquivos no disco.
- **`procuradorArquivo.open("nome.txt")`**: Método que estabelece a conexão com o arquivo.
- **`procuradorArquivo.eof()` (*End of File*):** Controla laços de repetição garantindo a leitura até o final do arquivo.
- **`procuradorArquivo.close()`**: Fecha o arquivo e libera a memória do sistema operacional.

---

## 📁 Conteúdo da Pasta

| Item / Arquivo | Descrição / Objetivo |
| :--- | :--- |
| **Anotações de Aula** | Estudo de conceitos sobre memória principal (RAM) vs. memória secundária e sintaxe base do `<fstream>`. |
| **Exemplos Práticos** | Leitura de arquivos linha por linha com `getline()` e checagem de erros com `exit()`. |

---

## 🛠️ Como Executar os Exemplos

Para compilar e executar qualquer código dessa seção via terminal:

```bash
# Compilar o código
g++ main.cpp -o programa

# Executar
./programa

# Algoritmos B

Repositório dedicado aos códigos, exercícios e anotações da disciplina de Algoritmos B.

* **Professor:** Alexandre Zambelan ([@alexandrezambelan](https://github.com/alexandrezamberlan))
* **Linguagens:** C / C++

---

## 📁 Estrutura do Repositório

* [anotacoes/](./anotacoes/) — Resumos teóricos e anotações feitas em aula.
* [codigos-aula/](./codigos-aula/) — Exemplos práticos e programas desenvolvidos durante as aulas.
* [exercicios/](./exercicios/) — Listas de exercícios e atividades resolvidas:
  * [exercicios/arquivo/](./exercicios/arquivo/) — Exercícios de leitura e manipulação de arquivos (`<fstream>`).
  * [exercicios/modularizacao/](./exercicios/modularizacao/) — Exercícios divididos em arquivos de cabeçalho (`.h`) e execução (`main.cpp`).
  * [exercicios/structs/](./exercicios/structs/) — Exercícios práticos focados em registros e estruturas de dados (`struct`).
* [projetos-pessoais/](./projetos-pessoais/) — Projetos autônomos, protótipos e experimentos de código (ex: RPG).

---

## 📝 Anotações de Aula

* 📄 [27/07/2026 - Introdução ao C++ e Comandos de Terminal](./anotacoes/2026-07-27.md)
* 📄 [03/08/2026 - Números Aleatórios e Estruturas de Menu](./anotacoes/2026-08-03.md)
* 📄 [10/08/2026 - Vetores Dinâmicos (vector) e Structs](./anotacoes/2026-08-10.md)
* 📄 [24/08/2026 - Manipulação de Arquivos em C++](./anotacoes/2026-08-24.md)
* 📄 [24/08/2026 - Leitura de Arquivos em C++](./anotacoes/2026-09-14.md)
* 📄 [24/08/2026 - Modularização e Funções em C++](./anotacoes/2026-09-28.md)

---

💻 CÓDIGOS E PRÁTICAS

### 📐 VETORES E ESTRUTURAS
* [`menu-operacoes-vetor.c`](./codigos-aula/menu-operacoes-vetor.c) — Menu interativo com operações básicas em vetores em C.
* [`sistema-garagem-vector.cpp`](./codigos-aula/sistema-garagem-vector.cpp) — Gerenciamento de garagem e veículos com `std::vector`.
* [`vetor_estatisticas.cpp`](./codigos-aula/vetor_estatisticas.cpp) — Processamento e estatísticas sobre elementos de um vetor.

### 🧩 MODULARIZAÇÃO E FUNÇÕES
* [`funcoes-e-vetores.cpp`](./codigos-aula/exercicios_aula/funcoes-e-vetores.cpp) — Passagem de vetores como parâmetros em funções.
* [`vetores-passagem-parametro.cpp`](./codigos-aula/exercicios_aula/vetores-passagem-parametro.cpp) — Exemplos de manipulação de vetores via funções.
* [`funcoes.h`](./codigos-aula/exercicios_aula/funcoes.h) / [`metodo.h`](./codigos-aula/exercicios_aula/metodo.h) — Arquivos de cabeçalho com protótipos e funções auxiliares.

### 🔍 VALIDAÇÃO DE DADOS
* [`validar-formato-data.cpp`](./codigos-aula/validar-formato-data.cpp) — Validação simples do formato de data (`dd/mm/aaaa`).
* [`validar-tamanho-cpf.cpp`](./codigos-aula/validar-tamanho-cpf.cpp) — Validação da quantidade de dígitos de um CPF (11 caracteres).

### 📂 MANIPULAÇÃO DE ARQUIVOS (`<fstream>`)
* [`busca-palavra-arquivo.cpp`](./codigos-aula/busca-palavra-arquivo.cpp) — Leitura e busca de ocorrência de palavras em arquivos de texto.
* [`leitura-csv-inflacao.cpp`](./codigos-aula/leitura-csv-inflacao.cpp) — Processamento e leitura de dados estruturados em arquivo CSV.

#include<string>
#include<vector>

using namespace std;

void carregarBase(string nomeBase, vector<ficha>& listaAlunos);
void atualizarBase(vector<ficha> listaAlunos, string nomeBase);

struct treino {
    string exercicio;
    string divisao;
    int reps;
    int series;
};

struct ficha {
    string nome;
    string data_nas;
    string data_ins;
    string goals;
    string genero;
    string divisao;
    int idade;

    vector<treino> listaExercicios;
};

void carregarBase(string nomeBase, vector<ficha>& listaAlunos);
void atualizarBase(vector<ficha> listaAlunos, string nomeBase);

#include<string>
#include<vector>

using namespace std;

struct treino {
    string exercicio;
    int reps;
    int series;
};

struct ficha {
    string nome;
    string data_nas;
    string data_ins;
    string goals;
    string genero;
    int idade;

    vector<treino> listaexercicios;
};

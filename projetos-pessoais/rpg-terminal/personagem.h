#ifndef personagem_h
#define personagem_h

#include<string>

using namespace std;

class personagem {
private: 
    string nome;
    string classe;
    int vidamaxima;
    int vida;
    int ataque;

public:
    //construtor

    personagem(string pnome, string pclasse, int pvida, int pataque);

    //metodos
    void exibirstatus();
    void receberdano(int dano);
    bool estavivo();

    int getataque();
    string getnome();

};

#endif

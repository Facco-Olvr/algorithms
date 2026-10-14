#include<iostream>

using namespace std;

int contarletra(string palavra, char letra){
    int contador = 0;
    for(char c : palavra){
        if(c == letra){
            contador++;
        }
    }
    return contador;
}

#include<iostream> 

using namespace std;

void receberdata(string sdia, string smes, string sano){
    int dia = stoi(sdia);
    int mes = stoi(smes);
    int ano = stoi(sano);

    if(mes < 1 || mes > 12 || ano < 1 || dia < 1){
        cout << "Data invalida!!\n";
        return;
    }

    int diasmes = 31;

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        diasmes = 30;
    }

    else if(mes == 2){
        bool bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
        diasmes = bissexto ? 29 : 28;
    }
    
    if(dia <= diasmes){
        cout << "Data valida!!\n";
    } else {
        cout << "Data invalida\n";
    }
}

#include<iostream>
#include<string>
#include "funcoes.h"

using namespace std;

int main(){
    string dia, mes, ano;

    cout << "escreva o dia: ";
    cin >> dia;

    cout << "escreva o mes: ";
    cin >> mes;

    cout << "escreva o ano: ";
    cin >> ano;

    receberdata(dia, mes, ano);

    return 0;
} 

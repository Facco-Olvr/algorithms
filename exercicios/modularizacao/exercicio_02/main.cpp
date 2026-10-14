#include<iostream>
#include<string>
#include "funcoes.h"

using namespace std;

int main(){
    string ano, mes, dia;

    cout << "Informe o ano: ";
    cin >> ano;

    cout << "Informe o mes: ";
    cin >> mes;

    cout << "Informe o dia: ";
    cin >> dia;

    receberdata(dia, mes, ano);

    return 0;
}

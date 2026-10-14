#include<iostream>

using namespace std;

void receberdata(string sdia, string smes, string sano){
    int dia = stoi(sdia);
    int mes = stoi(smes);
    int ano = stoi(sano);

    // 1. Validação básica de meses e anos inválidos
    if (mes < 1 || mes > 12 || ano < 1 || dia < 1) {
        cout << "Data invalida" << endl;
        return;
    }

    // 2. Descobrir quantos dias o mês tem
    int diasNoMes = 31; // padrão para maioria

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasNoMes = 30; // meses com 30 dias
    } 
    else if (mes == 2) {
        // Verifica se o ano é bissexto
        bool bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
        diasNoMes = bissexto ? 29 : 28;
    }

    // 3. Validação final do dia comparando com o limite do mês
    if (dia <= diasNoMes) {
        cout << "Data valida" << endl;
    } else {
        cout << "Data invalida" << endl;
    }
}

#include<iostream>
#include<string>

using namespace std;

//construir um metodo que receba um número de cpf sem pontuação e retorna se o cpf é valido,
// porém, avaliando somente a quantidade de digitos (11 digitos)

bool validarcpf(string cpf) {

    cout << "Digite o cpf: ";
    cin >> cpf;

    if(cpf.length() == 11){
        return true;
    }
    else{
        return false;
    }

}

int main() {
    string cpf;

    bool valido = validarcpf(cpf);

    if(valido){
        cout << "O cpf e valido";
    }
    else{
        cout << "O cpf nao e valido";
    }

    return 0;
}

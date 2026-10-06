#include<iostream>
#include<string>

using namespace std;


bool validardata(string data) {

    cout << "Digite a data(dd/mm/aaaa): ";
    cin >> data;

    if(data.length() == 10){
        return true;
    }
    else{
        return false;
    }

}

int main() {
    string data;

    bool valido = validardata(data);

    if(valido){
        cout << "a data e valida";
    }
    else{
        cout << "a data nao e valida";
    }

    return 0;
}

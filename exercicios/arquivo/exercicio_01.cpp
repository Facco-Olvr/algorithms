**EXERCICIO PRÉ USO DE ARQUIVO TEXTO

#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
//le n nomes completos e guarda no vetor
void lerNomes(vector<string> &nomes, int n) {
	string nome;
	for (int i = 0; i < n; i++) {
		cout << "Digite o nome completo da pessoa " << i + 1 << ": ";
		getline(cin, nome);
		nomes.push_back(nome);
	}
}
 
//exibe todos os nomes do vetor
void exibirNomes(vector<string> nomes) {
	cout << "\nNomes informados:\n";
	for (int i = 0; i < (int)nomes.size(); i++) {
		cout << nomes[i] << endl;
	}
}
 
int main() {
	int n;
	cout << "Quantos nomes deseja informar? ";
	cin >> n;
	cin.ignore(); //descarta o ENTER que sobrou no buffer
 
	vector<string> nomes;
	lerNomes(nomes, n);
	exibirNomes(nomes);
 
	return 0;
}
 

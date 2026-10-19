## EXERCICIO PRE USO DE ARQUIVO TEXTO

#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
//le n nomes e guarda no vetor
void lerNomes(vector<string> &nomes, int n) {
	string nome;
	for (int i = 0; i < n; i++) {
		cout << "Digite o nome da pessoa " << i + 1 << ": ";
		getline(cin, nome);
		nomes.push_back(nome);
	}
}
 
//exibe cada nome com a quantidade de caracteres ao lado
void exibirNomesComTamanho(vector<string> nomes) {
	cout << "\nNomes e quantidade de caracteres:\n";
	for (int i = 0; i < (int)nomes.size(); i++) {
		cout << nomes[i] << " - " << nomes[i].length() << " caracteres" << endl;
	}
}
 
int main() {
	int n;
	cout << "Quantos nomes deseja informar? ";
	cin >> n;
	cin.ignore();
 
	vector<string> nomes;
	lerNomes(nomes, n);
	exibirNomesComTamanho(nomes);
 
	return 0;
}
 

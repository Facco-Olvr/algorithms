## EXERCICIO PRE USO DE ARQUIVO TEXTO

#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
typedef struct {
	string nomeCompleto;
	string sobreNome;
} Pessoa;
 
//extrai o sobrenome (ultima palavra) de um nome completo
string extrairSobrenome(string nome) {
	//remove espacos no final do nome
	while (!nome.empty() && nome.back() == ' ') {
		nome.pop_back();
	}
	size_t pos = nome.find_last_of(' ');
	if (pos == string::npos) { //nome com uma palavra so
		return nome;
	}
	return nome.substr(pos + 1);
}
 
//le n nomes e preenche o vetor de pessoas
void lerPessoas(vector<Pessoa> &pessoas, int n) {
	Pessoa p;
	for (int i = 0; i < n; i++) {
		cout << "Digite o nome completo da pessoa " << i + 1 << ": ";
		getline(cin, p.nomeCompleto);
		p.sobreNome = extrairSobrenome(p.nomeCompleto);
		pessoas.push_back(p);
	}
}
 
//exibe nome completo e sobrenome de cada pessoa
void exibirPessoas(vector<Pessoa> pessoas) {
	cout << "\nPessoas cadastradas:\n";
	for (int i = 0; i < (int)pessoas.size(); i++) {
		cout << pessoas[i].nomeCompleto << "; " << pessoas[i].sobreNome << endl;
	}
}
 
int main() {
	int n;
	cout << "Quantos nomes deseja informar? ";
	cin >> n;
	cin.ignore();
 
	vector<Pessoa> pessoas;
	lerPessoas(pessoas, n);
	exibirPessoas(pessoas);
 
	return 0;
}
 

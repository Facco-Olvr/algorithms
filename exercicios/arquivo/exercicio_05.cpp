#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
 
typedef struct {
	string nomeCompleto;
	string sobreNome;
} Pessoa;
 
//extrai o sobrenome (ultima palavra) de um nome completo
string extrairSobrenome(string nome) {
	while (!nome.empty() && nome.back() == ' ') {
		nome.pop_back();
	}
	size_t pos = nome.find_last_of(' ');
	if (pos == string::npos) { //nome com uma palavra so
		return nome;
	}
	return nome.substr(pos + 1);
}
 
//le os nomes do arquivo de origem e preenche o vetor de pessoas
void lerPessoasDoArquivo(string nomeArquivo, vector<Pessoa> &pessoas) {
	ifstream procuradorArquivo;
	procuradorArquivo.open(nomeArquivo);
 
	if (!procuradorArquivo) {
		cout << "Arquivo nao localizado. Programa encerrado." << endl;
		exit(0);
	}
 
	string linha;
	Pessoa p;
	while (getline(procuradorArquivo, linha)) {
		if (!linha.empty() && linha.back() == '\r') {
			linha.pop_back();
		}
		if (linha.empty()) {
			continue;
		}
		p.nomeCompleto = linha;
		p.sobreNome = extrairSobrenome(linha);
		pessoas.push_back(p);
	}
	procuradorArquivo.close();
}
 
//salva nomeCompleto; sobreNome no arquivo de destino
void gravarPessoasNoArquivo(string nomeArquivo, vector<Pessoa> pessoas) {
	ofstream procuradorArquivo; //arquivo para escrita do ZERO
	procuradorArquivo.open(nomeArquivo);
 
	if (!procuradorArquivo) {
		cout << "Nao foi possivel criar o arquivo de destino. Programa encerrado." << endl;
		exit(0);
	}
 
	for (int i = 0; i < (int)pessoas.size(); i++) {
		procuradorArquivo << pessoas[i].nomeCompleto << "; " << pessoas[i].sobreNome << endl;
	}
	procuradorArquivo.close();
}
 
int main() {
	string arquivoOrigem, arquivoDestino;
	cout << "Informe nome do arquivo de origem dos nomes: ";
	cin >> arquivoOrigem;
	cout << "Informe nome do arquivo de destino: ";
	cin >> arquivoDestino;
 
	vector<Pessoa> pessoas;
	lerPessoasDoArquivo(arquivoOrigem, pessoas);
 
	//exibe na tela o que foi lido
	for (int i = 0; i < (int)pessoas.size(); i++) {
		cout << pessoas[i].nomeCompleto << "; " << pessoas[i].sobreNome << endl;
	}
 
	gravarPessoasNoArquivo(arquivoDestino, pessoas);
	cout << "\n" << pessoas.size() << " pessoas gravadas em " << arquivoDestino << endl;
 
	return 0;
}
 

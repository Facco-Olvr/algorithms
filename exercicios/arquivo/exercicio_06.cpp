#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
 
//le os nomes do arquivo de origem e guarda no vetor
void lerNomesDoArquivo(string nomeArquivo, vector<string> &nomes) {
	ifstream procuradorArquivo;
	procuradorArquivo.open(nomeArquivo);
 
	if (!procuradorArquivo) {
		cout << "Arquivo nao localizado. Programa encerrado." << endl;
		exit(0);
	}
 
	string linha;
	while (getline(procuradorArquivo, linha)) {
		if (!linha.empty() && linha.back() == '\r') {
			linha.pop_back();
		}
		if (linha.empty()) {
			continue;
		}
		nomes.push_back(linha);
	}
	procuradorArquivo.close();
}
 
//exibe os nomes na tela
void exibirNomes(vector<string> nomes) {
	cout << "\nNomes lidos:\n";
	for (int i = 0; i < (int)nomes.size(); i++) {
		cout << nomes[i] << endl;
	}
}
 
//grava cada nome com a quantidade de caracteres no arquivo de destino
void gravarNomesComTamanho(string nomeArquivo, vector<string> nomes) {
	ofstream procuradorArquivo;
	procuradorArquivo.open(nomeArquivo);
 
	if (!procuradorArquivo) {
		cout << "Nao foi possivel criar o arquivo de destino. Programa encerrado." << endl;
		exit(0);
	}
 
	for (int i = 0; i < (int)nomes.size(); i++) {
		procuradorArquivo << nomes[i] << "; " << nomes[i].length() << endl;
	}
	procuradorArquivo.close();
}
 
int main() {
	string arquivoOrigem, arquivoDestino;
	cout << "Informe nome do arquivo de origem dos nomes: ";
	cin >> arquivoOrigem;
	cout << "Informe nome do arquivo de destino: ";
	cin >> arquivoDestino;
 
	vector<string> nomes;
	lerNomesDoArquivo(arquivoOrigem, nomes);
	exibirNomes(nomes);
	gravarNomesComTamanho(arquivoDestino, nomes);
 
	cout << "\n" << nomes.size() << " nomes gravados em " << arquivoDestino << endl;
 
	return 0;
}

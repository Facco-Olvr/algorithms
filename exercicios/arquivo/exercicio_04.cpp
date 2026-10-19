#include <iostream>
#include <fstream>
#include <string>

using namespace std;
 
//le o arquivo de origem e exibe cada nome na tela
void exibirNomesDoArquivo(string nomeArquivo) {
	ifstream procuradorArquivo; //tipo de arquivo para leitura
	procuradorArquivo.open(nomeArquivo);
 
	if (!procuradorArquivo) {
		cout << "Arquivo nao localizado. Programa encerrado." << endl;
		exit(0);
	}
 
	string linha;
	int n = 0;
	while (getline(procuradorArquivo, linha)) { //lendo a linha inteira
		if (!linha.empty() && linha.back() == '\r') { //arquivos criados no Windows
			linha.pop_back();
		}
		if (linha.empty()) {
			continue;
		}
		cout << linha << endl;
		n++;
	}
	procuradorArquivo.close();
 
	cout << "\nTotal de nomes lidos: " << n << endl;
}
 
int main() {
	string nomeArquivo;
	cout << "Informe nome do arquivo de origem dos nomes: ";
	cin >> nomeArquivo;
 
	exibirNomesDoArquivo(nomeArquivo);
 
	return 0;
}
 

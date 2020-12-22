#include <iostream>

using namespace std;

struct celula{
	string nome;
	int idade;
	celula *proxima;
};

int main(){
	//alocaçao estatica
	celula aluno1;
	aluno1.nome = "Mailsom";
	aluno1.idade = 20;
	aluno1.proxima = NULL;
	
	celula *aluno2 = &aluno1;
	cout << aluno2->nome << " - " << aluno2->idade;
	
	celula *aluno4 = new celula;
	aluno4->nome = "Queiroz";
	aluno4->idade = 12;
	aluno4->proxima = NULL;
}
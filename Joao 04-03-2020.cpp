#include <iostream>

using namespace std;

struct celula{
	string nome;
	celula *proxima;
};

void imprimir(celula *l){
	while(l != NULL){
		cout << l->nome;
		l = l->proxima;	
	}
}

int main(){
	celula *lista;
	
	celula *joao = new celula;
	joao->nome = "Joao";
	joao->proxima = NULL;
	
	lista = joao;
	
	celula *jose = new celula;
	jose->nome = "Jose";
	jose->proxima = NULL;
	
	joao->proxima = jose;
	
	celula *pedro = new celula;
	pedro->nome ="Pedro";
	pedro->proxima = NULL;
	
	jose->proxima = pedro;

	imprimir(lista);
	
	
	
	return 0;
}
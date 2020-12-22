#include <iostream>

using namespace std;

struct celula{
	string nome;
	celula *proxima;
};

void imprimir(celula *lista){
	while(lista != NULL){
		cout << lista -> nome<<endl;
		lista = lista->proxima;
	}
}

int main(){
	celula *lista=NULL;
	celula *nova=new celula;
	nova->nome= "Nayara";
	nova->proxima=NULL;
	lista=nova;
	nova=new celula;
	nova->nome="Diogo";
	nova->proxima=lista;
	lista=nova;
}
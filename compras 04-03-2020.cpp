#include <iostream>

using namespace std;

struct celula{
	string item;
	double valor;
	celula *prox;
};

void imprimir(celula *l){
	while(l != NULL){
		cout << l->item << "-" << l->valor;
		l = l->prox;	
	}
}

celula * inserirInicio(celula *l, string i, double v){
	celula * nova = new celula;
	nova->item = i;
	nova->valor = v;
	nova->prox = l;
	return nova;
}

int main(){
	// celula *listaDeCompra;
	// celula *nova = new celula;
	// nova->item = "Mouse";
	// nova->valor = 60;
	// nova->prox = NULL;
	// 
	// listaDeCompra = nova;
	// 
	// 
	// nova = new celula;
	// nova->item = "Monitor";
	// nova->valor = 600;
	// nova->prox = listaDeCompra;
	// 
	// listaDeCompra = nova;
	
	celula *listaDeCompra = NULL;
	
	listaDeCompra = inserirInicio(listaDeCompra, "Mouse", 60);
	listaDeCompra = inserirInicio(listaDeCompra, "Monitor", 600);
	
	imprimir(listaDeCompra);
	
	return 0;
}
#include <iostream>
using namespace std;

struct celula{
   string nome, sobrenome;
   int idade;
   bool sexo;
   celula *proxima;
} 

celula *inserirNova(celula* lista, string n, string sn, int i, char s){
   celula *nova = new celula;
   nova ->nome = n;
   nova ->sobrenome = sn;
   nova ->idade = i;
   nova ->sexo = s;
   nova ->proxima = lista;

   return nova;
}


void imprimirMaior40(celula *lista){
   if(lista == NULL){
     cout << "lista vazia";
   }else{
     while(lista !=NULL){
	 if(lista->idade > 40)
         cout << lista->nome << " " << lista->sobrenome<< " " << lista->idade << " "<< lista->sexo << endl;
	       lista = lista->proxima;
     }
   }
}


int main(){
  celula *lista = NULL;
  lista = inserirNova(lista, "Matheus", "Riquelme", 19, "M");
  lista = inserirNova(lista, "Cheyenne", "Catanni", 19, "F");
  lista = inserirNova(lista, "Vinicius", "Reis", 21, "M");
  imprimir(lista);
  cout << endl;

  celula *lista2 = NULL;
  lista2 = inserirNova(lista2, "Renato", "Criviela", 34, "M");
  lista2 = inserirNova(lista2, "Cheyenne", "Catanni", 19, "F");
  imprimir(lista2);
 
  return 0; 
}







///Codigo Matheus Riquelme 
#include <iostream>

using namespace std;

class celula
{
private:
	string nome;
	string sexo;
	string bebida;
	int idade;
	celula * proxima;
public:
	celula()
	{
		proxima = NULL;
	}
	celula(string n)
	{
		nome = n;
	}
	celula(string n, celula *p)
	{
		nome = n;
		proxima = p;
	}
	celula(string n, string s, int i, string b, celula *p){
		nome = n;
		sexo = s;
		idade = i;
		bebida = b;
		proxima = p;
	}
	
	string getNome()
	{
		return nome;
	}
	void setNome(string n)
	{
		nome = n;
	}
	
	string getSexo()
	{
		return sexo;
	}
	void setSexo(string s)
	{
		sexo = s;
	}
	
	int getIdade()
	{
		return idade;
	}
	void setIdade(int i)
	{
		idade = i;
	}
	
	string getBebida()
	{
		return bebida;
	}
	void setBebida(string b)
	{
		bebida = b;
	}

	celula * getProxima()
	{
		return proxima;
	}

	void setProxima(celula * l)
	{
		proxima = l;
	}
};


class lista
{
private:
	celula * inicio;

public:
	lista()
	{
		inicio = NULL;
	}
	~lista(){
		esvaziar();
	}
	lista(celula *i)
	{
		inicio = i;
	}
	celula * getInicio()
	{
		return inicio;
	}

	void inserirInicio(string n, string s, int i, string b)
	{
		celula *nova = new celula;
		nova->setNome(n);
		nova->setSexo(s);
		nova->setIdade(i);
		nova->setBebida(b);
		nova->setProxima(inicio);
		inicio = nova;
	}

	void inserirFim(string n, string s, int i, string b)
	{
		if(inicio == NULL)
		{
			inserirInicio(n, s, i, b);
		}
		else
		{
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			celula *nova = new celula(n, s, i, b, NULL);
			aux->setProxima(nova); 
		}
	}


	void imprimir()
	{
		if(inicio == NULL)
		{
			cout << "Lista vazia.\n";
		}
		else
		{
			celula *aux = inicio;
			cout << "Bem vindo, segue abaixo a lista do Churrasco:\n\n";
			while(aux != NULL)
			{
				cout <<aux->getNome() << "\n" << "Sexo: " << aux->getSexo() << " \n" << "Idade: " << aux->getIdade() << "\n" << "Ingeri bebida: " << aux->getBebida() << "\n" << endl <<endl;
				aux = aux->getProxima();
			}
		}
	}
	
	void esvaziar(){
		celula *aux = inicio;
		while(aux != NULL)
		{	
			inicio = inicio->getProxima();
			delete aux;
			aux = inicio;
		}
		cout << "\nMemoria liberada com sucesso.";
	}
};

int main()
{
	
	lista listaChurrasco;
	listaChurrasco.inserirInicio("Matheus Riquelme", "M", 19, "N");
	listaChurrasco.inserirFim("Luana",  "F", 24, "S");
	listaChurrasco.inserirFim("Bianca", "F", 22, "S");
	listaChurrasco.inserirFim("Leticia", "F", 21, "S");
	listaChurrasco.imprimir();	
	
	return 0;
}

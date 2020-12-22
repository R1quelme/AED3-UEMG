#include <iostream>
#include <list>

using namespace std;

class jogador{
	private:
		string nome, posicao;
		int numero;
	public:
		jogador(){
		}
    
		jogador(string n, string p, int nu){
			nome = n;
			posicao = p;
			numero = nu;
		}

		bool operator == (const jogador& p) const {
			return nome == p.nome;
		}

		void imprimir(){
			cout << nome << " - " << posicao << " - " << numero << endl;
		}
};

class equipe{
	private:
		list<jogador> jogadores;
		string nome;
		string naciolidade;
		int ano;
	public:
		equipe(){
			nome = "";
			naciolidade = "";
			ano = 0;
		}
		equipe(string n, string na, int a){
			nome = n;
			naciolidade = na;
			ano = a;
		}

		bool operator == (const equipe& p) const {
			return nome == p.nome;
		}

void insereTime(){

  cout << "Qual time voce deseja inserir no torneio? " << nome << endl;
  
}
		void insereJogador(){
			cout << "Time a qual vai ser adicionado o jogador: "<< nome << endl;
			string nomeJogador, posicaoJogador;
			int numeroJogador;
			cout << "Digite o nome do jogador: ";
			cin >> nomeJogador;
			cout << "Digite a posição do jogador: ";
			cin >> posicaoJogador;
			cout << "Digite o número do jogador: ";
			cin >> numeroJogador;
			jogador temp(nomeJogador, posicaoJogador, numeroJogador);
			jogadores.push_back(temp);
			cout << "\nJogador inserido com sucesso\n";
		}

		void imprimirEquipe(){
			cout << "Equipe: " << nome;
			cout << "\nJogadores da equipe:\n";
			for(auto item : jogadores){
				item.imprimir();
			}
		}
		void removeJogador(){
			string n;
			cout << "Digite o nome do jogador que irá ser removido:";
			cin >> n;
			jogador temp(n, "", 0);
			jogadores.remove(temp);
		}
 list<jogador> getJogadores(){
      return jogadores;
    }
};

void cadastroJogador(list<equipe> &lista){
	cout << "Em qual time voce deseja adicionar um jogador? ";
	string j;
	cin >> j;
	equipe temp(j, "", 0);
	for(auto &item : lista){
		if(item == temp){
			item.insereJogador();
		}
	}
}
void removerJogador(list<equipe> &lista){
	cout << "De qual time voce deseja remover o jogador? ";
	string t;
	cin >> t;
	equipe temp(t, "", 0);
	for(auto &item : lista){
		if(item == temp){
			item.removeJogador();
		}
	}
}

int main(){

  string nome;
  string nacionalidade;
  int ano;
 int opcao;

list<equipe>torneio;

do{
    cout << "OPÇÕES:" << endl;
    cout << "1. Adicionar time no torneio" << endl; 
    cout << "2. Remover time do torneio" << endl;
    cout << "3. Adicionar jogador no time" << endl;
    cout << "4. Remover jogador do time" << endl ;
    cout << "5. Imprimir os times com seus respectivos jogadores" << endl;
    cout << "0. Finalizar Programa" << endl;
    cout << endl;
    cout << "Opcao: ";
    cin >> opcao;

      if (opcao == 1){
      cout << "Digite o nome do time que voce deseja adicionar ao torneio: " << endl;
	    cin >> nome;
      cout << "Digite a nacionalidade: " << endl;
      cin >> nacionalidade;
      cout << "Digite o ano do time: " << endl;
      cin >> ano;
      
      equipe e1(nome, nacionalidade, ano);
      torneio.push_front(e1);
      }
        if (opcao == 2){
        cout << "Digite o nome do time a ser removido do torneio: " << endl;
        cin >> nome;
        equipe temp(nome, "", 0);
        torneio.remove(temp);
       }

        if (opcao == 3){
        cadastroJogador(torneio);
        }

        if (opcao == 4){
        removerJogador(torneio);
        }

        if (opcao == 5){
       for(auto &equipe : torneio)
       {
         cout << endl;         
         
         cout << "Lista de jogadores inseridos nos determinados times: " << endl;
         cout << endl;
         for (auto &jogador : equipe.getJogadores())
         {

           jogador.imprimir();
         }
       }
        }
        if (opcao ==0){
          cout << "Programa finalizado!" << endl;
        }
      }while(opcao != 0); 

}
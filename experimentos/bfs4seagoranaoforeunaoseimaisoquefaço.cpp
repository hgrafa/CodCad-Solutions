#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#define maxvert 1010

using namespace std;

//------------------------------------------

int v, a, mrc[maxvert];
vector <int> grafo[maxvert];
queue <int> fila; 

//------------------------------------------

//pego um cara
//desmembro ele nos seus vizinhos e coloco na fila
/////adiciono os membros dele que forem 0 pois não foram visitados nem explorados
//jogo o marcador dele pra 2 depois de desmembrado
//faço isso enquanto a minha fila não esvaziar

//------------------------------------------

void bfs(int vert){ //agora vai

}

//------------------------------------------


int main(void){
	ios_base::sync_with_stdio(false);

	memset(mrc, 0, sizeof(mrc));

	cin >> v >> a;

	for(int i=0; i<a; i++){
		int x, y;

		cin >> x >> y;

		grafo[x].push_back(y);
		grafo[y].push_back(x);
	}

	int cont = 0; //vai contar quantas vezes exploro meu grafo
	// cada vez que ele chamar a bfs vai ser uma familia diferente

	for(int i=1; i<=v; i++){
		if(mrc[vert] == 0){ // se o cara não foi visitado

		}
	}

	return 0;
}
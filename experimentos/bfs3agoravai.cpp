#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#define maxvert 1010

using namespace std;

//-----------------------------------

int v, a, mrc[maxvert];
vector <int> grafo[maxvert];
queue <int> fila;

//-----------------------------------

void bfs(int vert){

	mrc[vert] = 1;

	do{

		int tam = grafo[vert].size();

		for(int i=0;i<tam;i++){
			int vizinho = grafo[vert][i];

			if(mrc[vizinho] == 0){
				fila.push(vizinho);
			}
		}

		int copia = fila.front();
		fila.pop();
		mrc[copia] = 2;
		bfs(copia);


	}while(not fila.empty());
}

//-----------------------------------

int main(void){
	ios_base::sync_with_stdio(false);

	cin >> v >> a;

	memset(mrc, 0, sizeof(mrc));

	for(int i=0; i<a; i++){
		int x, y;
		cout << "ta entrando\n";
		cin >> x >> y;

		grafo[x].push_back(y);
		grafo[y].push_back(x);
	}

	int cont = 0;
 
	cout << "CCCC \n";

	for(int i=1; i<=v; i++){
		cout << "AAAAAAAA \n";
		
		if(mrc[i] == 0){
			fila.push(i);
			cout << "BBBBBBB \n";
			bfs(i);
			cont++;
		}
	}

	cout << cont << "\n";

	return 0;
}
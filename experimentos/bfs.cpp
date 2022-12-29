#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define maxn 1010

using namespace std;

int mrc[maxn];
vector <int> grafo[maxn];
queue <int> fila;

// ---------------------------------------

void bfs(int vert){
	mrc[vert] = 1;

	cout << "to explorando o " << vert << "\n";

	int tam = grafo[vert].size();

	if(tam == 0) mrc[vert] = 2;
	else{

		for(int i=0; i<tam; i++){
			int vizinho = grafo[vert][i];

			if(mrc[vizinho] = 0){
				fila.push(vizinho);
			}
		}
	}

	mrc[vert] = 2;
}


// ---------------------------------------

int main(void){
	memset(mrc, 0, sizeof(mrc));

	ios_base::sync_with_stdio(false);

	int v, a, cont = 0;

	cin >> v >> a;

	for(int i=1; i<=a; i++){
		int x, y;

		cin >> x >> y;

		grafo[x].push_back(y);
		grafo[y].push_back(x);
	}

	for(int i=1; i<=v; i++){
		if(mrc[i] == 0){
			bfs(i);
			cont++;

			while(not fila.empty()){
				int temp = fila.front();
				fila.pop();
				bfs(temp);
			}
		}
	}

	cout << cont+1 << "\n";

	return 0;
}
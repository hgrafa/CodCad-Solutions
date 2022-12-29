#include <iostream>
#include  <vector>
#include <cstring>
#define maxvert 1000000
// ----------------------------------------------

using namespace std;

vector <int> grafo[maxvert];
int mrc[maxvert];

// ----------------------------------------------

void dfs(int vert){
	//o vert com certeza é zero
	//preciso ver se ele se estende

	int tam = (grafo[vert].size());

	//se ele for o último nas ramficações
	mrc[vert] = 1;

	if(tam == 0) mrc[vert] = 2;

	// se há alguem conectado a ele vamos olhar um por um
	
	for(int i=0; i<tam; i++){
		int vert_vizinho = grafo[vert][i];

		if(mrc[vert_vizinho] == 0){
			mrc[vert_vizinho] = 1;
			cout << "explorando o " << vert_vizinho << "\n";
			dfs(vert_vizinho);
		}
	}

	mrc[vert] = 2;

}

// ----------------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);

	int v, a, cont = 0;

	cin >> v >> a;

	memset(mrc, 0, sizeof(mrc));

	for(int i=1; i<=a; i++){
		int x, y;

		cin >> x >> y;

		grafo[x].push_back(y);
		grafo[y].push_back(x);
	}

	for(int i=1; i<=v; i++){
		cout << i <<")  ";

		for(int j=0; j < (grafo[i].size()); j++){
			cout << grafo[i][j] << " ";
		}

		cout << "\n";
	}

	for(int i=1; i<=v; i++){
		if(mrc[i] == 0){
			dfs(i);
			cont++;
		}
	}

	cout << cont << "\n";

	return 0;
}
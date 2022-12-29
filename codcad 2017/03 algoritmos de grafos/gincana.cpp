#include <iostream>
#include <cstring>
#include <vector>
#define maxvert 1010

using namespace std;

vector <int> grafo[maxvert];
int v, a, mrc[maxvert];

void dfs(int vert){

	mrc[vert] = 1;

	int tam = grafo[vert].size();

	if(tam == 0) mrc[vert] = 2;

	for(int i=0; i<tam; i++){
		int vizinho = grafo[vert][i];

		if( mrc[vizinho] == 0){
			dfs(vizinho);
		}
	}

	mrc[vert] = 2;
}

int main(void){
	ios_base::sync_with_stdio(false);

	int cont = 0;

	cin >> v >> a;

	memset(mrc, 0, sizeof(mrc));

	for(int i=0; i<a; i++){
		int x, y; 
		cin >> x >> y;

		grafo[x].push_back(y);
		grafo[y].push_back(x);
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
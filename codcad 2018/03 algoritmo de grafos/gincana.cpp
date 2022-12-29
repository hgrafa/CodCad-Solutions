//------------------------------------------

#include <iostream>
#include <cstring>
#include <vector>
#define maxn 1010
#define pb push_back

using namespace std;

//------------------------------------------

vector <int> grafo[maxn];
int v, a, mrc[maxn];

//------------------------------------------

void dfs(int v){
	mrc[v] = 1;

	int tam = grafo[v].size();

	if(tam == 0) mrc[v] = 2;
	else{

		for(int filho: grafo[v]){
			if(mrc[filho] == 0) dfs(filho);
		}

		mrc[v] = 2;

	}
}

//------------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);

	cin >> v >> a;

	for(int i=0; i<a; i++){
		int x, y;

		cin >> x >> y;

		grafo[x].pb(y);
		grafo[y].pb(x);
	}

	int cont = 0;

	for(int i=1; i<=v; i++){
		if(mrc[i] == 0){
			cont++;
			dfs(i);
		}
	}

	cout << cont << "\n";	

	return 0;
}

//------------------------------------------

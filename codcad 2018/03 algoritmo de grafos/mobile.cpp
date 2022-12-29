//------------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - Graphs Algorithms
// problem: Móbile
//------------------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <vector>

#define mainha main
#define maxn 100010

using namespace std;


//------------------------------------------------------
// global variables

int v, a, filhos[maxn], mrc[maxn];
vector <int> graph[maxn];
bool L = true;

//------------------------------------------------------
// the DFS function

void dfs(int vert, int pai){
	mrc[vert] = 1;

	int tam = graph[vert].size();

	filhos[vert] = 1;

	// caso base pra uma folha
	if(tam == 0){
		mrc[vert] = 2;
		return;	
	}

	for(int vizinho: graph[vert]){

		if(mrc[vizinho] == 0){
			dfs(vizinho, vert);
			filhos[vert] += filhos[vizinho];
		}

	}

	for(int i=1; i<tam; i++){
		int vizinho = graph[vert][i];
		int anterior = graph[vert][i-1];

		if(filhos[vizinho] != filhos[anterior] and anterior != pai and vizinho != pai){
			L = false;
			// cout << "os filhos de " << anterior << "sao dif de " << vizinho << "\n";
			break;
		}
	}

	mrc[vert] = 2;

	if(not L) return;
}

//------------------------------------------------------
// the mainha function

int mainha(void){

	scanf("%d", &v);

	a = v;

	for(int i=1; i<=a; i++){
		int a, b;

		scanf(" %d %d", &a, &b);

		if(a < b){
			int temp = a;
			a = b;
			b = temp;	
		}

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(0, -1	);

	// for(int i=0; i<=v; i++){
	
	// 	cout << i << ") ";

	// 	for(int vert: graph[i]){

	// 		cout << vert << " ";

	// 	}

	// 	cout << "\n";
	// }

	// for(int i=0; i<=v; i++){
	// 	cout << "filhos (" << i << "): " << filhos[i] << "\n";
	// }

	if(L) puts("bem");
	else puts("mal");	

	return 0;
}

//------------------------------------------------------

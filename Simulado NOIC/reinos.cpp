//-------------------------------------------------------
// Hugo Rafael de Lima
// Simulado NOIC
//-------------------------------------------------------
//bibliotecas e definições

#include <iostream>
#include <vector>
#define maxVert 100010

using namespace std;

//-------------------------------------------------------
// variáveis globais

vector <int> grafo[maxVert];
int mrc[maxVert], Nvert, Narest, c;

//-------------------------------------------------------
// função pra explorar o grafo

int dfs(int v){

	//se ja foi visitado eu paro
	if(mrc[v] == 2) return mrc[v];

	//visitei caraio
	mrc[v] = 1;

	//se for uma folha eu stopo
	if( grafo[v].size() == 0) return mrc[v] = 2;
		
	
	for(int i=0; i<grafo[v].size(); i++){
		int filho = grafo[v][i];
		if( mrc[filho] == 0 ) return mrc[v] = dfs(filho);
	}
}

//-------------------------------------------------------

int main(void){

	cin >> Nvert >> Narest;

	for(int i=1; i<=Nvert; i++) cout << mrc[i] << " ";

	for(int i=1; i<=Narest; i++){
		int a, b;

		cin >> a >> b;

		grafo[a].push_back(b);
		grafo[b].push_back(a);
	}

	for(int i=1; i<=Nvert; i++)
		if(mrc[i] == 0) mrc[i];
	

	cout << c-1 << "\n";

	return 0;
}

//-------------------------------------------------------

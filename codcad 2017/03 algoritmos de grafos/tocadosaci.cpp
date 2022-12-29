
#include <iostream>
#include <vector>
#include <cstring>
#define st first
#define nd second
#define maxn 1010

using namespace std;

// -------------------------------------------------------

/*
 vou converter os números recebidos pra uma lista de adjacência
 além disso se eu receber 3 vou salvar como pos_inic
 além disso se eu receber 2 vou salvar como pos_final
 começo a dfs boladona, somando quantas chamadas faço 
 explorando de pos_inic até achar o vertice pos_final
*/

// -------------------------------------------------------

int grafo[maxn][maxn];
int mrc[maxn], cont = 0, l, c;
pair <int, int> pos_inic;
pair <int, int> pos_final;

// -------------------------------------------------------

int dfs(int x, int y){ // recebo as coordenadas de onde começo

	if( x == pos_final.st and y == pos_final.nd) return cont;

	// cout << "passei pelo" << x << " " << y << "\n"; #DEBUG

	cont++;
	if(grafo[x+1][y] == 1 or grafo[x+1][y] == 3){
		grafo[x][y] = 2;
		return dfs(x+1, y);
	}else if(grafo[x-1][y] == 1 or grafo[x-1][y] == 3){
		grafo[x][y] = 2;
		return dfs(x-1, y);
	}else if(grafo[x][y+1] == 1 or grafo[x][y+1] == 3){
		grafo[x][y] = 2;
		return dfs(x, y+1);
	}else if(grafo[x][y-1] == 1 or grafo[x][y-1] == 3){
		grafo[x][y] = 2;
		return dfs(x, y-1);
	}

}


// -------------------------------------------------------

int main(void){
	ios_base::sync_with_stdio;

	memset(grafo, 0, sizeof(grafo));

	cin >> l >> c;

	for(int i=1; i<=l; i++){
		for(int j=1; j<=c; j++){
			cin >> grafo[i][j];
	
			if(grafo[i][j] == 2){
				pos_final.st = i;
				pos_final.nd = j;
				grafo[i][j] = 1; 
			}else if(grafo[i][j] == 3){
				pos_inic.st = i;
				pos_inic.nd = j;
				grafo[i][j] = 1; 
			}
		}
	}

	cout << dfs(pos_inic.st, pos_inic.nd)+1 << "\n" ; 

	return 0;
}

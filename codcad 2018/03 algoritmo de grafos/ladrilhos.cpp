//------------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - Teoria dos Garfos
// problem: Ladrilhos
//------------------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

#define mainha main
#define maxh 210
#define INF 40010

using namespace std;

//------------------------------------------------------
// global variables

int h, l;
int v[maxh][maxh];
int menor = INF;
int tam;

//------------------------------------------------------

void dfs(int i, int j, int vlr){

	v[i][j] = -1;
	tam++;

	if(v[i-1][j] == vlr)
		dfs(i-1, j, vlr);	

	if(v[i+1][j] == vlr)
		dfs(i+1, j, vlr);

	if(v[i][j+1] == vlr)
		dfs(i, j+1, vlr);

	if(v[i][j-1] == vlr)
		dfs(i, j-1, vlr);

}
	
//------------------------------------------------------
// the main function

int mainha(void){

	scanf("%d %d", &h, &l);

	memset(v, -1, sizeof(v));

	for(int i=1; i<=h; i++){
		for(int j=1; j<=l; j++){
			scanf(" %d", &v[i][j]);
		}
	}

	for(int i=1; i<=h; i++){
		for(int j=1; j<=l; j++){

			if(v[i][j] != -1){
				dfs(i, j, v[i][j]);
				menor = min(menor, tam);
				tam = 0;
			}

		}
	}

	printf("%d\n", menor);

	return 0;
}

//------------------------------------------------------

#include <iostream>
#include <cstdio>
#include <cstring>
#define maxaguenta 1010
#define maxobjetos 100
using namespace std;

int dp[maxaguenta][maxobjetos], Nobjetos, capacidade;
int peso[maxobjetos], valor[maxobjetos]; 

int mochila(int aguenta, int objeto){

	// printf("Fazendo mochila pra %d com o objeto %d\n", aguenta, objeto);

	if(dp[aguenta][objeto] != -1) return dp[aguenta][objeto];

	if(aguenta <= 0 or objeto > Nobjetos) return 0;

	int caso1 = mochila(aguenta, objeto+1);

	if(aguenta >= peso[objeto]){
		int caso2;
		caso2 = valor[objeto] + mochila(aguenta - peso[objeto], objeto+1);
		return (dp[aguenta][objeto] = max(caso1, caso2));
	}else return (dp[aguenta][objeto] = caso1);

}

int main(void){
	int test = 1;

	 while(scanf("%d %d", &capacidade, &Nobjetos)){

	 	if(Nobjetos == 0 and capacidade == 0) break;

	 	memset(dp, -1, sizeof(dp));

	 	for(int i=1; i<=Nobjetos; i++) scanf("%d %d", &peso[i], &valor[i]);

	 	printf("Teste %d\n", test);
	 	printf("%d\n", mochila(capacidade, 1));
	 	printf("\n");

	 	test++;
	 }

	return 0;
}
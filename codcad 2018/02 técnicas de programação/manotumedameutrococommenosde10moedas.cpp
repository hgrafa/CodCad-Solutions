//------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - técnicas de procrastinação
// problem: Mano, tu me dá meu troco com menos de 10 moedas
//------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>
#include <cstring>

#define maxn 10010
#define mainha main
#define INF 999999

using namespace std;

//------------------------------------------
// variáveis globais

int n, vlr, v[maxn], dp[maxn];

//------------------------------------------

int change(int troco){

	if(troco < 0) return 11;

	if(troco == 0) return 1;

	if(dp[troco] != -1) return dp[troco];	

	int r = INF;

	for(int i=1; i<=n; i++){

		int moeda = v[i];

		r = min( r , 1 + change(troco - moeda) );

	}

	return dp[troco] = r;

}

//------------------------------------------

int mainha(void){

	scanf(" %d %d", &n, &vlr);

	memset(dp, -1, sizeof(dp));

	for(int i=1; i<=n; i++) scanf(" %d", &v[i]);

	if(change(vlr) > 10) puts("N");
	else puts("S");

	return 0;
}

//------------------------------------------

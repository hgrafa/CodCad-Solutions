//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - técnicas de progrmação
// problem: banco inteligente
//-------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>
#include <cstring>

#define mainha main
#define maxn 100010
#define INF 9999999

using namespace std;

//-------------------------------------------
// variáveis globais

int n, vlr, dp[maxn], v[maxn], estoque[maxn];

//-------------------------------------------

bool existe(int moeda){

	if(estoque[moeda] > 0) return true;

	return false;

}

//-------------------------------------------

int change(int troco){

	if(troco < 0) return 0;

	if(troco == 0) return 1;

	if(dp[troco] != -1) return dp[troco];

	dp[troco] = 0;

	for(int i=1; i<=n; i++){

		int moeda = v[i];

		if(existe(moeda)){

			// tiro a moeda
			estoque[moeda]--;

			// vejo se dá pra usar e se der conto
			if(change(troco-moeda))
				dp[troco]++;

			// coloco a moeda de volta
			estoque[moeda]++;

		}

	}

	return dp[troco];

}

//-------------------------------------------

int main(void){

	scanf(" %d", &n);

	for(int i=1; i<=n; i++) scanf(" %d %d", &v[i], estoque[v[i]]);

	memset(dp, -1, sizeof(dp));

	scanf(" %d", &vlr);

	printf("%d\n", change(vlr));

	return 0;
}

//-------------------------------------------

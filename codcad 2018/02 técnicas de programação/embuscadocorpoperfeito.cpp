#include <iostream>
#include <cstdio>
#include <cstring>
#define maxn 2010
using namespace std;

long long dp[maxn][maxn], valor[maxn], peso[maxn];
long long capacidade, Nobjetos;

long long mochila(long long aguenta, long long objeto){

	if(dp[aguenta][objeto] != -1) return dp[aguenta][objeto];

	if(objeto > Nobjetos or aguenta == 0) return 0;

	long long caso1 = mochila(aguenta, objeto+1);

	if(aguenta >= peso[objeto]){
		long long caso2 = valor[objeto] + mochila(aguenta - peso[objeto], objeto+1);
		return (dp[aguenta][objeto] = max(caso1, caso2));
	}else return (dp[aguenta][objeto] = caso1);

}

int main(void){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	memset(dp, -1, sizeof(dp));

	scanf("%lld %lld", &capacidade, &Nobjetos);

	for(int i=1; i<=Nobjetos; i++) scanf("%lld %lld", &peso[i], &valor[i]);

	printf("%lld\n", mochila(capacidade, 1));

	return 0;
}
#include <iostream>
#include <cstring>
#define maxn 2010;
using namespace std;

long long dp[maxn][maxn], valor[maxn], peso[maxn];
long capacidade, Nobjetos;

int mochila(int aguenta, int objeto){

	if(dp[aguenta][objeto] != -1) return dp[aguenta][objeto];

	if(objeto == Nobjetos or aguenta <= 0) return 0;

	long long caso1 = mochila(aguenta, objeto+1);

	if(aguenta >= peso[objeto]){
		long long caso2 = valor[objeto] + mochila(aguenta-peso[objeto], objeto+1);
		return max(caso1, caso2);
	}else return caso1;

}

int main(void){
	memset(dp, -1, sizeof(dp));

	cin >> capacidade >> Nobjetos;

	for(int i=0; i<n; i++) cin >> peso[i] >> valor[i];

	cout << mochila(capacidade, 0) << "\n";

	return 0;
}
//------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - técnicas de procrastinação
// problem: Véi, dá meu troco
//------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>
#include <cstring>

#define mainha main
#define maxn 1010

using namespace std;

//------------------------------------------
// variáveis globais

int n, vlr;
long v[maxn];

//------------------------------------------

bool change(long troco){

	if(troco < 0) return false;

	if(troco == 0) return true;

	for(int i=1; i<=n; i++){

		int moeda = v[i];

		if( change(troco - moeda) )
			return true;

	}

	return false;

}

//------------------------------------------

int mainha(void){

	scanf(" %d %d", &n, &vlr);

	for(int i=1; i<=n; i++) scanf(" %ld", &v[i]);

	if( change(vlr) ) puts("S");
	else puts("N");

	return 0;
}

//------------------------------------------

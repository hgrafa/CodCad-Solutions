//------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - técnicas de procrastinçãonce
// problem: Isso aqui é que não dá!
//------------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>
#include <cstring>

#define mainha main
#define maxn 10010

using namespace std;

//------------------------------------------------
// variáveis globais

int n, vlr, v[maxn];
int dp[maxn];

//------------------------------------------------

int change( int troco ){

  if(troco < 0) return 0;

  if(troco == 0) return 1;

  if(dp[troco] != -1) return dp[troco];

  for(int i=1; i<=n; i++){

    int moeda = v[i];

    if( change(troco-moeda) )
      return dp[troco] = 1;
  }

  return dp[troco] = 0;
}

//------------------------------------------------

int mainha(void){

  int cont = 0;

  scanf(" %d %d", &n, &vlr);

  for(int i=1; i<=n; i++) scanf(" %d", &v[i]);

  memset(dp, -1, sizeof(dp));

  for(int i = (vlr-1); i>=0; i--){

    if(change(i)) cont++;

  }

  printf("%d\n", vlr - cont);

  return 0;
}

//------------------------------------------------

//------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - técnicas de procrastinação
// problem: corredor
//------------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>

#define maxn 50010
#define INF 99999

using namespace std;

//------------------------------------------------
// variáveis globais

int n, v[maxn], dp[maxn];

//------------------------------------------------

int maxsubsequence(void){

  int maior = -INF;

  dp[1] = max(0, v[1]);
  maior = max(maior, dp[1]);

  for(int i=2; i<=n; i++){

    dp[i] = max(v[i], dp[i-1]+v[i]);
    maior = max(maior, dp[i]);

  }

  return maior;

}

//------------------------------------------------

int main(void){

  scanf(" %d", &n);

  for(int i=1; i<=n; i++) scanf(" %d", &v[i]);

  int r = maxsubsequence();

  printf("%d\n", r);

  return 0;
}

//------------------------------------------------

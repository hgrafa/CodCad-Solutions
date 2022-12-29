#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){
  string a;

  cin >> a;

  long long x;

  x = a.size()-1;

  if((a[x]-48)%2 == 0) puts("S");
  else puts("N");

  int soma = 0;

  for(long long i=0; i<(x+1); i++){
    soma += (a[i]-48);
    soma %= 3;
  }

  if(soma == 0) puts("S");
  else puts("N");

  if((a[x]-48)%5 == 0) puts("S");
  else puts("N");

  return 0;

}
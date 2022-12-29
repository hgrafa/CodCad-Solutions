#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(void){
  string a;

  cin >> a;

  long long tam = a.size()-1;

  int fim;

  if(tam < 1){
    fim = a[tam]-48;
  }else{
    fim = 10*(a[tam-1]-48)+(a[tam]-48);
  }

  if(fim%4 == 0) puts("S");
  else puts("N");

  int soma = 0;

  for(long long i=0; i<(tam+1); i++){
    soma += (a[i]-48);
    soma %= 9;
  }

  if(soma == 0) puts("S");
  else puts("N");

  if(fim%25 == 0) puts("S");
  else puts("N");

  return 0;
}
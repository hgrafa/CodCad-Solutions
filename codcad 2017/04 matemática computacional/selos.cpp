#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool prim(unsigned long long x){
  long long k;

  k = floor( sqrt(x) );

  for(int i=1; i<=k; i++) if(x%i == 0 and i != 1) return false;

  return true;
}


int main(void){
  unsigned long long n;

  scanf("%llud", &n);

  if(n==1 or prim(n)){
    puts("N");
  }else{
    puts("S");
  }

  return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool prim(int x){

  if(x==1) return false;
  if(x==2) return true;

  int k;

  k = floor(sqrt(x))+1;

  for(int i=2; i<=k; i++){
    if(x%i==0) return false;
  }

  return true;
}


int main(void){
  int n;

  scanf("%d", &n);

  bool L = true;

  for(int i=1; i<=n; i++){
    if(prim(i)){
      if(L){
        printf("%d", i);
        L = false;
      }else{
        printf(" %d", i);
      }
    }
  }

  return 0;
}
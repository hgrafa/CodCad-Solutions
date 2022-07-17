#include <stdio.h>

int main(){
  int n, j=0;

  while(scanf("%d", &n)){
    if(n == 0) break;
    else if(n>j) j=n;
  }

  printf("%d\n", j );

  return 0;
}
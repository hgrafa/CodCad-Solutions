#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;

  scanf("%d", &n);

  for(int i=1; i <= n; i++){
    if(n%i == 0)
      printf("%d\n", i);
  }

  return 0;
}

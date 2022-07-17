#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;

  scanf("%d", &n);

  long long int v[n];

  for(int i=0; i < n; i++)
    scanf("%llud", &v[i]);

  int fixo = 0, temp = 0;

  for(int i=0; i < n-1; i++){
    if(v[i] == v[i+1]){
      temp++;
    }else{
      if(temp > fixo){
        fixo = temp;
      }
      temp = 0;
    }

    if(i == n-2){
      if(temp > fixo){
        fixo = temp;
      }
    }
  }

  printf("%d\n", fixo+1);

  return 0;
}
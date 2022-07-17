//Codigo de exemplo
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  bool L = true;
  scanf("%d", &n);

  long long int v[n];

  for(int i=0; i < n; i++)
    scanf("%lld", &v[i]);

  sort(v, v+n);

  for(int i=0; i < n; i++){

    if(L == true){
      printf("%lld", v[i]);
      L = false;
    }else{
      printf(" %lld", v[i]);
    }
  }

  printf("\n");

  return 0;
}
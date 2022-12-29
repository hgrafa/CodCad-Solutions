#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void){
  int n;

  scanf("%d", &n);

  int v[n];

  for(int i=0; i<n; i++) scanf("%d", &v[i]);

  int r;

  r = __gcd(v[0], v[1]);

  for(int i=2; i<n; i++){
    if(r == 1) break;

    r = __gcd(r, v[i]);
  }

  printf("%d\n", r);
}

#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, m;

  cin >> n >> m;

  int v[n];

  for(int i=0; i<n; i++) v[i] = 0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      int k;
      cin >> k;
      v[i] += k;
    }
  }

  int c[n];

  for(int i=0; i<n; i++) c[i] = v[i];

  sort(c, c+n);

  for(int i=0; i<3; i++){
    for(int j=0; j<n; j++){
      if(c[i] == v[j]){
        cout << j+1 << "\n";
      }
    }
  }

  return 0;
}
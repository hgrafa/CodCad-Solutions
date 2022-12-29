	#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;

  cin >> n;

  vector < int > v;

  for(int i=0; i < n; i++){
    int insere;
    cin >> insere;
    v.push_back(insere);
  }

  sort(v.begin(), v.end());

  int cont = 1;
  int tot = 0;

  for(int i=0; i <= (n-1); i++){
    if((i < (n-2)) and v[i] == v[i+1]){
      cont++;
    }else if( (i==n-1) or (v[i] != v[i+1]) ){

      if(cont%2 == 0) tot += cont;
      else tot += (cont+1);

      cont = 1;
    }
  }

  if(n == 1) tot = 2;

  cout << tot << "\n";

  return 0;
}
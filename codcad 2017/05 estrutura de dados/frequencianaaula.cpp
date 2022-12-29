#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  set < int > v;


  cin >> n;

  for(int i=0; i < n; i++){
    int insere;
    cin >> insere;
    v.insert(insere);
  }

  cout << v.size() << "\n";

  return 0;
}
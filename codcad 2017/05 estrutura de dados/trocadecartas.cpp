#include <bits/stdc++.h>
using namespace std;

int main(void){
  int a, b;

  while(   cin >> a >> b and a!=0 and b!=0){
    set < int > x;
    set < int > y;
    set < int >::iterator it;

    for(int i=0; i < a; i++){
      int insere;
      cin  >> insere;
      x.insert(insere);
    }

    for(int i=0; i < b; i++){
      int insere;
      cin >> insere;
      y.insert(insere);
    }

    int cont = 0, tam;

    if(x.size() < y.size()){
      tam = x.size();
      for(it = x.begin(); it !=  x.end() ; ++it){
        if( y.find( *it) != y.end()){
            cont++;
          }
        }
      }else{
        tam = y.size();
        for(it = y.begin(); it != y.end(); ++it){
          if(x.find( *it) != x.end()){
            cont++;
          }
        }
      }

      cout << tam - cont << "\n";
    }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(void){
  char t;
  string a, c;
  bool L = true;

  while( (cin >> t >> a) && (t!= '0' && a != "0")){

    for(unsigned long long int i = 0; i < a.size(); i++){
      if( a[i] != t){
        if(a[i] != '0'){
          L = false;
        }
        c.push_back(a[i]);
      }
    }

    if(c.empty() or L == true){
      c = "0";
    }

    for(unsigned long long int i = 0; i < c.size(); i++){
      printf("%c", c[i]);
    }

    c.clear();

    printf("\n");

  }

  return 0;
}
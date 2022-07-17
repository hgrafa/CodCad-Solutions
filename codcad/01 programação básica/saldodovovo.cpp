#include <iostream>
using namespace std;

int main(){
  int n, s, t, r;

  cin >> n >> s;

  r=s;

  for(int i=0;i<n;i++){
    cin >> t;
    s += t;
    if(r>s)
      r=s;
    else continue;
  }

  cout << r;
  
  return 0;
}
#include <iostream>
using namespace std;

int r=0;

int coll(int n){
  if(n==1) return r;

  if(n%2==0){
    n = n/2;
  }else{
    n = 3*n+1;
  }

  r++;

  if(n==1){
    return r;
  }else{
    return coll(n);
  }
}

int main(){
  int n, v;
  cin >> n;

  v = coll(n);

  cout << v << "\n";
}
#include <iostream>
using namespace std;

int main(){
  int n, c, l, r=0;

  cin >> n;

  for(int i=0;i<n;i++){

    cin >> l >> c;

    if(l>c) r+=c;
  }

  cout << r << "\n";

  return 0;
}
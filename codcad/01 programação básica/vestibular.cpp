#include <iostream>
using namespace std;

int main(){
  string prova, gabarito;
  int n, r=0;

  cin >> n;

  cin >> gabarito;
  cin >> prova;

  for(int i=0; i<n; i++){
    if(gabarito[i] == prova[i])
      r++;
  }

  cout << r << "\n";

  return 0;
}
#include <iostream>
using namespace std;

int main(){
  int  n, sum = 0, vlr = 0;

  cin >> n;

  int v[n];

  for(int i=0; i<n; i = i+1){
    cin >> v[i];
  }

  for(int i=0; i<n; i = i+1){
    sum += v[i];
  }

  sum = sum/2;

  for(int i=0; i<n; i = i+1){
    vlr = vlr + v[i];
    if(vlr == sum){
      cout << i+1 << "\n";
      break;
    }else continue;
  }


  return 0;
}
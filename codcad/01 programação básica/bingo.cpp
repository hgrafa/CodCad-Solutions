	#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, b;

  while( cin>>n >>b and n != 0 and b != 0){
    int v[b];

    bool vt[n+1];

    for(int i=0; i < n+1; i++){
      vt[i] = false;
    }

    for(int i=0;i< b;i++ )
      cin>>v[i];


      for(int i=0;i<b;i++){
        for(int j=i;j<b;j++){
          int temp;
          temp = v[i] - v[j];
          temp = abs(temp);
          vt[temp] = true;
        }
      }

      for(int i=0; i<n+1; i++){
        if(vt[i] == false){
          puts("N");
          break;
        }else if(i == n){
          puts("Y");
        }
      }
    }
  }
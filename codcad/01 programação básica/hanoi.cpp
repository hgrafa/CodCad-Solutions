#include <iostream>
#include <iomanip>
#include <cmath>
int cont=0;
using namespace std;
int main(){
  
  cout << fixed << setprecision(0);
  
  int n,i=1;
  while (cin>>n){
    if(n==0){
      break;
    }
    cout<<"Teste "<<i<<endl;
    cout<<pow(2,n)-1<<endl;
    cout<<endl;
    i+=1;
  }
} 
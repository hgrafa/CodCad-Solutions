#include <iostream>
using namespace std;

int main (){
int a, b, c, d;
cin>>a>>b;
cin>>c>>d;

if(a*b>c*d){
cout<<"Primeiro\n";
}
if(a*b<c*d){
cout<<"Segundo\n";
}
if(a*b==c*d){
cout<<"Empate\n";
}
}
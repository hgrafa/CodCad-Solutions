#include <iostream>
using namespace std;
int main(){
	
	int X, a;
	cin >> X;
	a=1;
	while(X >= a){
		if(X%a==0){
			cout << a;
			cout << " ";
		}
		a = a+1;
	}
	
	return 0;
}
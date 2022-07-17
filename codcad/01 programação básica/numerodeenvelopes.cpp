#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	0 <= a and a <=1000;
	for(int i=0;i<a;i++){
		cin >> b;
		if(i==0){
			c=b;
		}
		if(b<c and i!=0){
			c=b;
		}
	}
	cout << c;
}
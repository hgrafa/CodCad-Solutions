#include <iostream>
using namespace std;
int main(){
	
	char a;
	double b, c;
	cin >> a ;
	cin >> b >> c;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	if (a == 'M'){
		 cout << b*c; 
	}
	
	if (a == 'D'){
		cout << b/c;
	}
}
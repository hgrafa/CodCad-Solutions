#include <iostream>
using namespace std;
int main (){
	
	int X, Y;
	cin >> X >> Y;
	
	X >= -500;
	X <= 500;
	Y >= -500;
	Y <= 500;
	
	if (X<0 or X>432){
		cout << "fora\n";
		
	}else if(Y<0 or Y>468){
		cout << "fora";
	}else{
		cout << "dentro\n";
	}
	
	return 0;
	
}
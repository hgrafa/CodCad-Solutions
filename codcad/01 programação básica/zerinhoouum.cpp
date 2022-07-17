#include <iostream>
using namespace std;
int main(){
	
	int A, B , C;
	cin >> A >> B >> C;
	
	if ( A == 1){
		if ( B == 1){
			
			if(C == 1){	cout << "*";}
			
			if(C == 0){ cout << "C";}
		}else{
			
			if(C == 1){	cout << "B";}
			
			if(C == 0){ cout << "A";}
		}
	} else if ( A == 0) {
		if ( B == 1){
			
			if(C == 1){	cout << "A";}
			
			if(C == 0){ cout << "B";}
		}else{
			
			if(C == 1){	cout << "C";}
			
			if(C == 0){ cout << "*";}	
		}
		} 
}
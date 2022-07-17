#include <iostream>	
using namespace std;
int main(){
	int O1,O2,P1,P2,B1,B2;
	cin >> O1 >> P1 >> B1; 
	cin >> O2 >> P2 >> B2;
	
	if ( O1>O2 or O1<O2){
		
		if(O1>O2){
			cout << "A\n";
		}
		
		if (O1<O2){
			cout << "B\n";
		}
	}else if(P1>P2 or P1<P2){
			
			if(P1>P2){
				cout << "A\n";
			}
			
			if(P1<P2){
				cout << "B\n";
			}
		}else	if(B1>B2 or B1<B2){
				
				if(B1>B2){
					cout << "A\n";		
				}
				if(B1<B2){
					cout<<"B\n";
				}
			}
	
	return 0;
}
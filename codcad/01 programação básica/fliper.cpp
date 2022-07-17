#include <iostream>
using namespace std;
int main(){
	int P, R;
	cin >> P >> R;
	
	P>=0;
	P<=1;
	R>=0;
	R<=1;
	
	if (P==1 or P==0 ){
		
		if(P==0){
			cout << "C";
		}else{
			if(R==0){
				cout << "B";
			}else{
				cout << "A";
			}
		}
	}
	
	return 0;

}
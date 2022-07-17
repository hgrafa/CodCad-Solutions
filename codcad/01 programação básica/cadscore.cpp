#include <iostream>
using namespace std;
int main(){
	
	int P, N, V;
	cin >> P >> N;
	
	for(int i=0; i < N; i++){
		cin >> V;
		P = P+V;
		
		if(P>100){
			P = 100;
		}
		
		if(P<0){
			P = 0;
		}
	}
	
	cout << P;
	return 0;
}
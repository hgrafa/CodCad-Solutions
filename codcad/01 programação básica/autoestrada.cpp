#include <iostream>
using namespace std;
int main(){
	int C, r;
	char K;
	r = 0;
	cin >> C;
	
	1 <= C and C <= 1000000;
	
	for(int i=0; i < C; i++){
		
		cin >> K;
		
		if(K== 'P' or K == 'C'){
			r=r+2;	
		}else if(K=='A'){
			r=r+1;
		}else if(K=='D'){
			r=r+0;
		}
	}
	cout << r;
}
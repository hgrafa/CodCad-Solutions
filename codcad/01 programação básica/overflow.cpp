#include <iostream>
using namespace std;
int main(){
	int N, P, Q, r;
	char C;
	
	cin >> N >> P >> C >> Q;
	
	if(C=='+'){
		r = P + Q;
	}else if(C=='*'){
		r=P*Q;
	}
	
	if(r <= N){
		cout << "OK";
	}else{
		cout << "OVERFLOW";
	}
}
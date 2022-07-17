#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int L, A, P, R, K;
	cin >> L >> A >> P >> R;
	K = sqrt( L*L + A*A + P*P);
	if (K <= 2*R){
		cout << "S";
	}else{
		cout << "N";
	}
}
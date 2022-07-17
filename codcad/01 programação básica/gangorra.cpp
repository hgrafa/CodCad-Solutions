#include <iostream>
using namespace std;
int main(){
	int P1, C1, P2, C2, A1, A2;
	cin >> P1 >> C1 >> P2 >> C2;
	A1 = P1*C1;A2 = P2*C2;
	10 <= P1 and P1<=100;10 <= C1 and C1<=100;
	10 <= P2 and P2<=100;10 <= C2 and C2<=100;
	if(A1 == A2){ cout << "0";
	}else{
		if(A1 > A2){cout << "-1";
		}else{cout << "1";}
	}
}
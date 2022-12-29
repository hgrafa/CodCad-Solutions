#include <iostream>
#include <cmath>

using namespace std;

bool prim(long n){
	long x;

	x = floor( sqrt(n) );

	for(int i=1; i<=x; i++) if(n%i == 0 and i!=1) return false;

	return true;
}

int main(void){
	long n;

	cin >> n;

	bool L = true;

	for(int i=2; i<=n; i++){
		if(prim(i) and L){
			cout << i;
			L = false;
		}else if(prim(i)) cout << " " << i;
	}

	cout << "\n";

	return 0;
}
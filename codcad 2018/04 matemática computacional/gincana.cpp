#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool prim(long long x){
	
	if(x == 1) return true;
	if(x%2 == 0) return false;

	long long r = sqrt(x);

	for(long long i=3; i<=r; i+=2) if(x%i == 0) return false;
	
	return true;
}

int main(void){
	long long n;

	cin >> n; 

	cin >> n;

	for(long long i = n-1; i > 0; i--){
		if(prim(i)){
			cout << i << "\n";
			break;
		}
	}

	return 0;
}
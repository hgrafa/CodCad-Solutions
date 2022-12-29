#include <iostream>
#include <cmath>

using namespace std;

bool prim(int n){

	long long x;

	x = sqrt(n);

	if(n == 1) return false;
	if(n == 2 or n == 3) return true;
	if(n%2 == 0) return false; 

	for(int i=5; i<=x; i+=2) if(n%i == 0) return false;

	return true;
}

int main(void){

	long long n;

	cin >> n;

	if(prim(n)) cout << "S\n";
	else cout << "N\n";

	return 0;
}
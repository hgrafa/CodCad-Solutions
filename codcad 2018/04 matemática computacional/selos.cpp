#include <iostream>
#include <cmath>

using namespace std;

bool prim(unsigned long long n){

	long long x;

	x = floor ( sqrt(n));

	if(n == 1) return true;
	if(n == 2 or n == 3) return true;
	if(n%2 == 0) return false; 

	for(long long i=5; i<=x; i+=2) if(n%i == 0) return false;

	return true;
}

int main(void){

	unsigned long long n;

	cin >> n;

	if(not prim(n)) cout << "S\n";
	else cout << "N\n";

	return 0;
}
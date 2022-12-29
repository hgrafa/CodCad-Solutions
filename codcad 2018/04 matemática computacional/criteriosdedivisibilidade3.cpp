#include <iostream>
// #include <cmath>
#include <cstdio>
using namespace std;

int main(void){
	// ios_base::sync_with_stdio(f)

	unsigned long long r;

	cin >> r;

	if(r%11 == 0 or r == 0) puts("S");
	else puts("N");

	return 0;
}
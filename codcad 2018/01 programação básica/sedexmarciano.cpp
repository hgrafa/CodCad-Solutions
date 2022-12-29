#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int a, b, c, r;

	cin >> a >> b >> c >> r;

	double diag;

	diag = a*a + b*b + c*c;

	diag = sqrt(diag);

	if(diag <= (double)2*r)cout << "S\n";
	else cout << "N\n";

	return 0;
}
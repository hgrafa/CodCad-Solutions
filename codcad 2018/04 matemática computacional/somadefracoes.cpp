#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	long a, b, c, d;

	cin >> a >> b >> c >> d;

	long num, dem, mdc;

	num = a*d + b*c;

	dem = b*d;

	mdc = __gcd(num, dem);

	cout << num/mdc << " " << dem/mdc << "\n";

	return 0;
}
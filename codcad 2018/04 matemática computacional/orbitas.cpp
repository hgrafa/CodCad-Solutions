#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	long long a, b, mdc;

	cin >> a >> b;

	if(a < b) swap(a, b);

	a /= __gcd(a, b);

	cout << b*a << "\n";

	return 0;
}
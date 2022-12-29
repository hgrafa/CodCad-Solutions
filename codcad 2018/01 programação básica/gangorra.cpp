#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	a *= b;
	c *= d;

	if(a == c) cout << "0\n";
	else if(a < c) cout << "1\n";
	else cout << "-1\n";

	return 0;
}
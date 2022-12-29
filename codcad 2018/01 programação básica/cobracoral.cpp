#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if(a == c or b == d) cout << "V";
	else cout << "F";

	cout << "\n";

	return 0;
}
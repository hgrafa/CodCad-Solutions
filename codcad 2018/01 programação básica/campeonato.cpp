#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int a[3], b[3];

	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];

	a[0] *= 3;
	b[0] *= 3;
	a[0] += a[1];
	b[0] += b[1];

	if(a[0] > b[0]) cout << "C";
	else if(b[0] > a[0]) cout << "F";
	else if(a[2] > b[2]) cout << "C";
	else if(b[2] > a[2]) cout << "F";
	else cout << "=";

	cout << "\n"; 

	return 0;
}
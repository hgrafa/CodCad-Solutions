#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	cout << abs(c-a) + abs(d-b) << "\n";

	return 0;
}
#include <iostream>

using namespace std;

int main(){
	double x, y;
	
	cin >> x >> y;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cout << x/y << "\n";
	return 0;
}
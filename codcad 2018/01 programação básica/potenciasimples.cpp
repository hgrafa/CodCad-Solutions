#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	double x, y;

	cin >> x >> y;

	cout << setprecision(4) << fixed;

	cout << pow(x, y) << "\n";


	return 0;
}
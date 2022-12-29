#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void){
	int n;

	cin >> n;

	for(int i=0; i<n; i++){
		double x;
		cin >> x;

		cout << setprecision(4) << fixed;

		cout << sqrt(x) << "\n";
	}

	return 0;
}
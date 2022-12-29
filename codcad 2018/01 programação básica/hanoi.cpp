#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
	double n;
	int i = 1;

	cout << setprecision(0) << fixed;

	while(cin >> n and n != 0){
		cout << "Teste " << i << "\n";

		cout << pow(2.0, n)-1 << "\n\n";

		i++;
	}

	return 0;
}
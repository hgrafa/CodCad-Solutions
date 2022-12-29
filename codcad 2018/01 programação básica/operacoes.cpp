#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	double a, b;
	char o;

	cin >> o >> a >> b;

	cout << setprecision(2) << fixed;

	if(o == 'M') cout << a*b;
	else if(o == 'D') cout << a/b;

	cout <"\n";

	return 0;
}
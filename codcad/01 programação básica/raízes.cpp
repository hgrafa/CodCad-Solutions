#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a;
	int N;
	cin >> N;
	cout.precision(4);
	cout.setf(ios::fixed);
	
	for(int I = 0;I<N; I++){
		cin >> a;
		cout << sqrt(a) << endl;
	}
}
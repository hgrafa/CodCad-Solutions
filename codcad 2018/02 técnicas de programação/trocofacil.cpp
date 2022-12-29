#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; 

	cin >> n;

	int c = 0;

	c += floor(n/100);
	n -= floor(n/100)*100;

	c += floor(n/50);
	n -= floor(n/50)*50;	

	c += floor(n/25);
	n -= floor(n/25)*25;

	c += floor(n/10);
	n -= floor(n/10)*10;

	c += floor(n/5);
	n -= floor(n/5)*5;

	c += floor(n/1);
	n -= floor(n/1);


	cout << c << "\n";

	return 0;
}
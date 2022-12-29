#include <iostream>
using namespace std;

int solve(int n){
	if(n%2 == 0) return (n/2);
	else return (3*n+1);
}

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	int cont = 0;

	while(n != 1){
		cont++;

		n = solve(n);
	}

	cout << cont << "\n";

	return 0;
}
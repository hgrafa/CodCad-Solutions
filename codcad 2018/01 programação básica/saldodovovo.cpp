#include <iostream>

using namespace std;

int main(void){
	int n, saldo, menor;

	cin >> n >> saldo;

	menor = saldo;

	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		saldo += x;

		if(saldo < menor) menor = saldo;
	}

	cout << menor << "\n";

	return 0;
}
#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int saldo, n;

	cin >> saldo >> n;

	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		saldo += x;

		if(saldo < 0)saldo = 0;
		if(saldo > 100) saldo = 100;
	}

	cout << saldo << "\n";

	return 0;
}
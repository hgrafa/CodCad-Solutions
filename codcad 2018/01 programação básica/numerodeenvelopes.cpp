#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n, menor = 1000000;

	cin >> n;

	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		if(x < menor) menor = x;
	}

	cout << menor << "\n";

	return 0;
}
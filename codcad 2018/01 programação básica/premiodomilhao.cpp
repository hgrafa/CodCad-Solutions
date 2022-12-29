#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	int v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	int sum = 0, cont = 0;

	while(sum < 1000000){
		sum += v[cont];
		cont++;
	}

	cout << cont << "\n";

	return 0;
}
#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n, min, cont=0;

	cin >> n >> min;

	for(int i=0; i<n; i++){
		int x, y;

		cin >> x >> y;

		x += y;

		if(x >= min) cont++;
	}

	cout << cont << "\n";

	return 0;
}
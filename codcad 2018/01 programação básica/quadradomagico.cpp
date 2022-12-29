#include <iostream>
using namespace std;

int main(void){
	int n;

	cin >> n;

	int v[n][n], test=0;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> v[i][j];
		}

		test += v[i][i];
	}

	int d = 0;

	for(int i=0; i<n; i++) d += v[i][n-i-1];

	if(d != test){
		cout << "-1\n";
		return 0;
	}

	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			sum += v[i][j];
		}

		if(sum != test){
			cout << "-1\n";
			return 0;
		}
	}

	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			sum += v[j][i];
		}

		if(sum != test){
			cout << "-1\n";
			return 0;
		}
	}

	cout << test << "\n";

	return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	long long n;

	cin >> n;

	for(int i=0; i<n; i++){

		long x, maior = 0;

		cin >> x;

		for(int i=1; i<x; i++){
			if(x%i == 0) maior++;
		}

		cout << maior << "\n";
	}

	return 0;
}
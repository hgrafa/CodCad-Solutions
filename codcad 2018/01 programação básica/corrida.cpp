#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	long long v[n], copia[n];

	for(int i=0; i<n; i++){
		v[i] = 0;

		for(int j=0; j<m; j++){
			long long temp;

			cin >> temp;

			v[i] += temp;
		}

		copia[i] = v[i];
	}

	sort(copia, copia+n);

	for(int i=0; i<n; i++){
		if(v[i] == copia[0]){
			cout << i+1 << "\n";
			break;
		}
	}

	for(int i=0; i<n; i++){
		if(v[i] == copia[1]){
			cout << i+1 << "\n";
			break;
		}
	}

	for(int i=0; i<n; i++){
		if(v[i] == copia[2]){
			cout << i+1 << "\n";
			break;
		}
	}

	return 0;
}
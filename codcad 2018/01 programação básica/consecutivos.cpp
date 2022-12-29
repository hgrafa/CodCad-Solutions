#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	int v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	int taigual = 1, maiorseq = 1;

	for(int i=1; i<n; i++){
		if(v[i-1] == v[i]){
			taigual++;
		}

		if(v[i-1] != v[i] or i == n-1){
			if(taigual > maiorseq) maiorseq = taigual;
			taigual = 1;
		}
	}

	cout << maiorseq << "\n";

	return 0;
}
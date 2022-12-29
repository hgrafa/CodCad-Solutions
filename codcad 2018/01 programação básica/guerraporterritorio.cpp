//----------------------------------------
// 		Hugo Rafael 2018
// 		guerra por territorio
// 		codcad - programação básica
//----------------------------------------

#include <iostream>
using namespace std;

//----------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);

	int n, sum = 0;

	cin >> n;

	int v[n];

	for(int i=0; i<n; i++){
		cin >> v[i];
		sum += v[i];
	}

	sum /= 2;
	int parcial = 0;

	for(int i=0; i<n; i++){
		parcial += v[i];

		if(parcial == sum){
			cout << i+1 << "\n";
			break;
		}
	}

	return 0;
}

//----------------------------------------
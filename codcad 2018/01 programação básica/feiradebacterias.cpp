#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	double l[n], k[n];

	int maior = 0;

	for(int i = 0; i < n; i++){
		cin >> l[i] >> k[i];

		k[i] *= log(l[i]);
	
		if(k[i] > k[maior]) maior = i;
	}

	cout << maior << "\n";

	return 0;
}
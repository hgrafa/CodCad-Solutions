#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int a, b, tam, primerum;

	bool carga = false;

	cin >> a >> b;

	tam = max(a, b);

	int x[tam], y[tam];

	for(int i=0; i<tam; i++){
		if(i < a) cin >> x[i];
		else x[i] = 0;
	}

	for(int i=0; i<tam; i++){
		if(i < b) cin >> y[i];
		else y[i] = 0;
	}

	bool L = false;

	for(int i = (tam-1); i>=0; i--){

		if(not carga){
			x[i] += y[i];

			if(x[i] == 2){
				x[i] = 0;
				carga = true;
			}

		}else{
			
			x[i] += (y[i]+1);

			if(x[i] == 1) carga = false;
			else if(x[i] == 2) x[i] = 0;
			else if(x[i] == 3) x[i] = 1; 

		}

		if(x[i] == 1 and not L){
			L = true;
			primerum = i;
		}

	}

	for(int i=0; i<tam; i++){
		if(i > primerum) break;

		if(L){
			cout << x[i];
			L = false;
		}else cout << " " << x[i];
	}

	cout << "\n";

	return 0;
}
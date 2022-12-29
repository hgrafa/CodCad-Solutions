//---------------------------------------
// 		Hugo Rafael 2018
// 		bingo
// 		codcad - programação básica
//---------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

//---------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);

	int n, b;

	while(cin >> n >> b and (n or b)){
		int v[b];
		bool test[n+1];

		for(int i=0; i<b; i++) cin >> v[i];

		for(int i=0; i<=n; i++) test[i] = false;

		for(int i=0; i<b; i++){
			for(int j=(i); j<b; j++){
				int dif = abs(v[i] - v[j]);
				test[dif] = true;
				// cout << dif << " ";
			}

			// cout << "\n";
		}

		int L = true;

		for(int i=0; i<=n; i++){
			// cout << test[i];
			
			if(test[i] == false){
				L = false;
				break;
			}		
		}

		if(L) cout << "Y\n";
		else cout << "N\n";
	}

	return 0;
}

//---------------------------------------
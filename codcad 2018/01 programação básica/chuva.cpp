#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	int a[n][n], b[n][n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) cin >> a[i][j];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) cin >> b[i][j];
	}

	for(int i=0; i<n; i++){
		bool L = true;


		for(int j=0; j<n; j++){
			if(L){
				cout << a[i][j] + b[i][j];
				L = false;
			}else cout << " " << a[i][j] + b[i][j];
		}

		cout << "\n";
	}


	return 0;
}
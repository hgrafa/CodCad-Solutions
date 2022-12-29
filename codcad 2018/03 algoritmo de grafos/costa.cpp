#include <iostream>
#define nmax 1010
using namespace std;

int grafo[1010][1010];

bool checa(int i, int j){
	if(not grafo[i+1][j]) return true;
	
	if(not grafo[i-1][j]) return true;
	
	if(not grafo[i][j+1]) return true;
	
	if(not grafo[i][j-1]) return true;
	
	return false;
}

int main(void){
	int n, m;

	cin >> n >> m;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			char x;

			cin >> x;

			if(x == '#') grafo[i][j] = 1;
			else grafo[i][j] = 0;

			// cout << grafo[i][j] << " ";
		}

		// cout << "\n";
	}

	int cont = 0;	

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(grafo[i][j] == 1 and checa(i, j) ){
				cont++;
				// cout << "a posição " << i << " " << j << " eh costa\n";
			}
				
			
		}
	}

	cout << cont << "\n";

	return 0;
}
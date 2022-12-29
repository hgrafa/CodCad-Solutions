#include <iostream>
#include <cstring>
#define maxn 10010

using namespace std;

/*
t = 0  , 0 pergunta
t = 1  , 1 adiciona
> grafo fortemente conexo
> se pergunta e existe 1
> se pergunta e n existe 0
> se adiciona n fala nada
*/

int main(void){
	ios_base::sync_with_stdio(false);

	long long n;
	int m, a, b;
	bool t;

	cin >> n >> m;

	int grafo[n][n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			grafo[i][j] = 0;
		}
	}


	for(int i=0; i<m; i++){
		cin >> t >> a >> b;
	
		if(t){
			grafo[a-1][b-1] = 1;
			grafo[b-1][a-1] = 1;
		}else{

			if(grafo[a-1][b-1] == 1) cout << "1\n";
			else cout << "0\n";

		}
	}

	return 0;
}
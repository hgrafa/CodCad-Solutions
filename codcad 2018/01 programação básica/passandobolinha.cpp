#include <iostream>
#include <cstring>
#define maxn 110
using namespace std;

int n, a, b, v[maxn][maxn], mrc[maxn][maxn], cont = 0;

void bandeira(int i, int j){
	mrc[i][j] = 1;

	if(mrc[i-1][j] == 0 and v[i-1][j] >= v[i][j]){
		bandeira(i-1, j);
	}
	if(mrc[i+1][j] == 0 and v[i+1][j] >= v[i][j]){
		bandeira(i+1, j);
	}
	if(mrc[i][j+1] == 0 and v[i][j+1] >= v[i][j]){
		bandeira(i, j+1);
	}
	if(mrc[i][j-1] == 0 and v[i][j-1] >= v[i][j]){
		bandeira(i, j-1);
	}

	mrc[i][j] = 2;
	cont++;
}

int main(void){
	ios_base::sync_with_stdio(false);

	cin >> n >> a >> b;

	memset(mrc, -1, sizeof(mrc));

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> v[i][j];
			mrc[i][j] = 0;
		}
	}

	bandeira(a, b); 

	cout << cont << "\n"; 

	return 0;
}
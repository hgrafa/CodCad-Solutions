#include <iostream>
#define maxn 1010
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int l, c, g[maxn][maxn];
	char a;

	cin >> l >> c;

	for(int i=1; i<=l; i++){
		for(int j=1; j<=c; j++){
			cin >> a;

			if(a == '#') g[i][j]=1;
			else g[i][j] = 0;
		}
	}

	int costa = 0;

	for(int i=1; i<=l; i++){
		for(int j=1; j<=c; j++){
			if(g[i][j] == 1){
				if(g[i][j+1]==0 or g[i][j-1]==0 or g[i+1][j]==0 or g[i-1][j]==0){
					costa++;
				}
			}
		}
	}

	cout << costa << "\n";

	return 0;
}
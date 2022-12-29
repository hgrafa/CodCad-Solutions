#include <iostream>
#define maxn 1010

using namespace std;

int local[maxn][maxn], l, c;

bool solve(int x, int y){
	if(local[x][y-1]==0 or local[x][y+1]==0){
		return true;
	}else if(local[x-1][y]==0 or local[x+1][y]==0){
		return true;
	}


	return false;
}

int main(void){
	ios_base::sync_with_stdio(false);

	int costa = 0;

	cin >> l >> c;

	char a;

	for(int i=1; i<=l; i++){
		for(int j=1; j<=c; j++){

			cin >> a;

			if(a == '#') local[i][j] = 1;
			else local[i][j] = 0;
		}
	}

	// for(int i=0; i<=l+1; i++){
	// 	for(int j=0; j<=c+1; j++){
	// 		cout << local[i][j] << " ";
	// 	}

	// 	cout << "\n";
	// }

	for(int i=1; i<=l; i++){
		for(int j=1; j<c; j++){
			if(local[i][j] == 1 and solve(i, j) ) costa++;
		}
	}

	cout << costa;

	return 0;
}

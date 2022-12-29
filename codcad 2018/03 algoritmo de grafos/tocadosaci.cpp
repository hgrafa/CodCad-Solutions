#include <iostream>
#define maxn 1010

using namespace std;

struct lugar{
	int i, j;
};

int n, m;
int v[maxn][maxn];
lugar certo, inicial;

int dfs(lugar atual, int passo){

	if(atual.i == certo.i and atual.j == certo.j) return passo;

	v[atual.i][atual.j] = 3;

	if(v[atual.i][atual.j+1] == 1) atual.j++;
	else if(v[atual.i][atual.j-1] == 1) atual.j--;
	else if(v[atual.i+1][atual.j] == 1) atual.i++;
	else atual.i--;
	 
	return dfs(atual, passo+1);
}

int main(void){
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin >> v[i][j];

			if(v[i][j] == 2){
				certo.i = i;
				certo.j = j;
				v[i][j] = 1;
			}else if(v[i][j] == 3){
				inicial.i = i;
				inicial.j = j;
			}

		}
	}

	cout << dfs(inicial, 1) << "\n";

	return 0;
}
//-------------------------------------------------
// Hugo Rafael de Lima
// Contest NOIC
//-------------------------------------------------

#include <cstdio>
#include <cstring>

using namespace std;

//-------------------------------------------------

int main(void){

	int n, m, q;

	scanf(" %d %d", &n, &m);

	int v[n+1][m+1], dp[n+1][m+1];

	memset(dp, 0, sizeof(dp));

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			scanf(" %d", &v[i][j]);

			if(i==1){
				if(j==1) dp[i][j] = v[i][j];
				else dp[i][j] = v[i][j] + dp[i][j-1];
			}

			if(j==1) dp[i][j] = v[i][j] + dp[i-1][j];
		}
	}

	for(int i=2; i<n; i++)
		for(int j=2; j<m; j++)
			dp[i][j] = v[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
		


	scanf(" %d", &q);

	for(int i=0; i<q; i++){
		int l1, c1, l2, c2;

		scanf(" %d %d %d %d", &l1, &c1, &l2, &c2);

		printf("%d\n", dp[l2][c2] - dp[l1-1][c2] - dp[l2][c1-1] + dp[l1-1][c1-1]);
	}

	return 0;
}

//-------------------------------------------------
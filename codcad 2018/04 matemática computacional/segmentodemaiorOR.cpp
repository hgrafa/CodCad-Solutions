// ---------------------------------------------------
// 	Hugo Rafael de Lima 
//  codcad 2018
// 	matemática computacional
// ---------------------------------------------------

#include <iostream>
#include <algorithm>
#include <cstring>
#define maxn 100010

using namespace std;

// ---------------------------------------------------

int v[maxn], dp[maxn], n;

// ---------------------------------------------------

int OR(int cel){

	if(dp[cel] != -1) return dp[cel];

	if(cel > n) return 0;


	int r = dp[cel] = v[cel]|OR(cel+1);

	// cout << r << "\n";

	return r;
}

// ---------------------------------------------------

int main(void){

	cin >> n;	

	for(int i=1; i<=n; i++) cin >> v[i];

	memset(dp, -1, sizeof(dp));

	int maior = 0;

	for(int i=1; i<=n ; i++) OR(i);
	
	for(int i=1; i<=n; i++ ) maior = max(dp[i], maior);

	cout << maior << "\n";

	return 0;
}

// ---------------------------------------------------

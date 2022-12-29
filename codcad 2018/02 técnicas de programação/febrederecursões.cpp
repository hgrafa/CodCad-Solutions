#include <iostream>
#include <cstring>
#define maxn 1010
using namespace std;

long long dp[maxn], a[maxn], n, k, m;

int f(int x){
	if(dp[x] != -1) return (dp[x]%m);

	// cout  << "calculando o f de " << x << "\n";

	long long r = 0;

	for(int i=1; i<=n; i++){

		r += a[i]*f(x-i);
		r %= m;

	}

	dp[x] = (r%m);

	return (dp[x]);

}

int main(void){

	cin >>	n >> k >> m;

	for(int i=1; i<=n; i++) cin >> a[i];

	memset(dp, -1, sizeof(dp));

	for(int i=1; i<=n; i++) cin >> dp[i];

	cout << f(k) << "\n";

	return 0;
}
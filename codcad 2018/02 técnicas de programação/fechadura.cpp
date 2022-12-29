#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	int v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	int tot = 0;

	for(int i=0; i<n-1; i++){
		int dif;

		dif = m-v[i];

		v[i] += dif;
		v[i+1] += dif;

		if(dif < 0) tot -= dif;
		else tot += dif;
	}

	cout << tot << "\n";

	return 0;
}
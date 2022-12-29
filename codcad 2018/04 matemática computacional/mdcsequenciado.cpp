#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;	

	long v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	long mdc = __gcd(v[0], v[1]);

	for(int i=2; i<n; i++) mdc = __gcd(mdc, v[i]);

	cout << mdc << "\n";	

	return 0;
}
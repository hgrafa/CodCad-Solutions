#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	int v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	sort(v, v+n);

	bool L = true;
	for(int i=0; i<n; i++){
		if(L){
			cout << v[i];
			L = false;
		}else cout << " " << v[i];
	}

	cout << "\n";

	return 0;
}
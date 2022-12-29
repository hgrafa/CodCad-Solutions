#include <iostream>
#define maxn 100010
using namespace std;

int v[maxn], n;

int search(int x, int inic){
	int i, f, m;

	f = n;
	i = inic;

	while( f >= i){

		m = (i+f)/2;

		if(v[m] == x) return m;
		else if( v[m] > x) f = m-1;
		else i = m+1;
	}

	return -1;
}

int main(void){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int k;

	cin >> n;

	for(int i=1; i<=n; i++) cin >> v[i];

	cin >> k;

	for(int i=1; i<=n; i++){
		int temp = search( k - v[i], i);

		if(temp != -1){
			cout << v[i] << " " << v[temp] << "\n";
			break;
		}
	}

	return 0;
}
#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	string a, b;

	int n;

	cin >> n >> a >> b;

	int  cont = 0;

	for(int i=0; i<n; i++){
		if(a[i] == b[i])cont++;
	}

	cout << cont << "\n";

	return 0;
}
#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n, quebrou=0;

	cin >> n;

	for(int i=0; i<n; i++){
		int l, c;

		cin >> l >> c;

		if(l > c) quebrou += c;
	}

	cout << quebrou << "\n";

	return 0;
}
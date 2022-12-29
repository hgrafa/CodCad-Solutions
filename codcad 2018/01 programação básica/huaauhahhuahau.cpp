#include <iostream>
using namespace std;

bool isvogal(char x){
	if(x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u'){
		return true;
	}

	return false;
}

int main(void){
	ios_base::sync_with_stdio(false);

	string a, b;

	cin >> a;

	for(int i=0; i<a.size(); i++){
		if(isvogal(a[i])) b += a[i];
	}

	bool L = true;
	int n = b.size();

	for(int i=0; i<n; i++){
		if(b[i] != b[n-1-i] and L) L = false;
	}

	if(L) cout << "S\n";
	else cout << "N\n";

	return 0;
}
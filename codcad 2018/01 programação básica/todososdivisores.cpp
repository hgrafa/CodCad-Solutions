#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	bool L = true;

	for(int i=1; i<=n; i++){
		if(n%i==0){
			if(L){
				cout << i;
				L = false;
			}else cout << " " << i;
		}
	}

	cout << "\n";

	return 0;
}
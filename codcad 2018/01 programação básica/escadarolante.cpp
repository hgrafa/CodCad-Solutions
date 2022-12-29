#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n, t=10;

	cin >> n;

	int v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	for(int i=1; i<n; i++){
		int temp = v[i] - (v[i-1]+10);

		if(temp < 0){
			t += (10+temp);
		}else{
			t += 10;
		}
	}

	cout << t << "\n";

	return 0;
}
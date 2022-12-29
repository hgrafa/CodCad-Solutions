#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n, v[3];

	cin >> n >> v[0] >> v[1] >> v[2];

	sort(v, v+3);

	if(n < v[0]){
		cout << "0\n";
		return 0;
	}else n -= v[0];

	if(n < v[1]){
		cout << "1\n";
		return 0;
	}else n -= v[1];

	if(n < v[2]){
		cout << "2\n";
		return 0;
	}else cout << "3\n";

	return 0;
}
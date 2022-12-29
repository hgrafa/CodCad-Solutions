#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	long long v[n];
	vector <int> x;

	for(int i=0; i<n; i++) cin >> v[i];

	for(int i=1; i<n; i++){
		if(v[i] < v[i-1] and i != n-1){
			x.push_back(v[i-1]);
		}else if(v[i] < v[i-1]){
			x.push_back(v[i]);
		}
	}

	sort(x.begin(), x.end());

	cout << x.size() << "\n";

	for(int i=0; i<x.size(); i++)cout << x[i] << " ";

	cout << "\n";

	return 0;
}
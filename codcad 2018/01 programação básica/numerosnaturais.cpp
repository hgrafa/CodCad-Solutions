#include <iostream>

using namespace std;

int sum(int x){
	if(x == 1) return 1;
	else return x + sum(x-1);
}

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	cout << sum(n) << "\n";

	return 0;
}
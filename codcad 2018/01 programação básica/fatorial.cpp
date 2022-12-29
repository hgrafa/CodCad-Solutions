#include <iostream>

using namespace std;

int fat(int x){
	if(x < 2) return 1;
	else return x*fat(x-1);
}

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	cout << fat(n) << "\n";

	return 0;
}
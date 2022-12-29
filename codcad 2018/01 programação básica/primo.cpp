#include <iostream>
#include <cmath>
using namespace std;

bool prim(int x){
	if(x == 1 or x == 2 or x == 3) return false;

	int max = floor(sqrt(x));

	for(int i=2; i<=max; i++){
		if(x%i == 0)return true;
	}

	return false;
} 

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	if(not prim(n)) cout << "S\n";
	else cout << "N\n";


	return 0;
}
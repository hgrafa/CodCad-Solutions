//-------------------------------------------
// 		Hugo Rafael 2018
// 		auto estrada
// 		codcad - programação básica
//-------------------------------------------

#include <iostream>
using namespace std;

//-------------------------------------------

int main(void){

	ios_base::sync_with_stdio(false);

	int n, t=0;
	char x;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> x;

		if(x == 'P' or x == 'C') t += 2;
		else if(x == 'A') t += 1;
	}

	cout << t << "\n";

	return 0;
}

//-------------------------------------------
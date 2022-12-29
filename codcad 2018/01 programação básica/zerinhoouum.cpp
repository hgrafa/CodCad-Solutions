#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int a, b, c, sum;

	cin >> a >> b >> c;

	sum = a+b+c;

	if(not a and not b and not c) cout << "*";
	else if(a and b and c) cout << "*";
	else if(sum == 2){
	
		if(not a) cout << "A";
		else if(not b) cout << "B";
		else cout << "C";
	
	}else{

		if(a) cout << "A";
		else if(b) cout << "B";
		else cout << "C";
	
	}

	cout << "\n";

	return 0;
}
//-------------------------------------------------
// 		Hugo Rafael 2018
//  	overflow
// 		codcad - programação básica
//-------------------------------------------------

#include <iostream>
using namespace std;

//-------------------------------------------------

int main(void){

	ios_base::sync_with_stdio(false);

	int limit, a, b;

	char o;

	cin >> limit;
	cin >> a >> o >> b;

	int r;

	if(o=='+') r = a+b;
	else r = a*b;

	if(r > limit) cout << "OVERFLOW\n";
	else cout << "OK\n";

	return 0;
}

//-------------------------------------------------
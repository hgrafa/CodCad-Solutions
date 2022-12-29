#include <iostream>

using namespace std;

int main(void){

	ios_base::sync_with_stdio(false);

	int x, y, w, z;

	cin >> x >> y >> w >> z;

	if( x*y > w*z ) cout << "Primeiro\n";
	else if( x*y < w*z) cout << "Segundo\n";
	else cout << "Empate\n";

	return 0;
}
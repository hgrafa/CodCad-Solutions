#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	float x, y;

	cin >> x >> y;	

	if(x <= y) cout << "Pedro\n";
	else cout << "Paulo\n";  

	return 0;
}
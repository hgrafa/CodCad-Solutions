#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int x, y;

	cin >> x >> y;

	if(x >=0 and x <= 432){

		if(y >= 0 and y <= 468) cout << "dentro\n";
		else cout << "fora\n";

	}else cout << "fora\n";

	return 0;
}
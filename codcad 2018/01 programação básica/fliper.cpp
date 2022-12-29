#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	bool x, y;

	cin >> x >> y;

	if(not x) cout << "C\n";
	else if(not y) cout << "B\n";
	else cout << "A\n";  

	return 0;
}
#include <iostream>

using namespace std;

int main(void){

	ios_base::sync_with_stdio(false);

	int a, b, c;

	cin >> a >> b >> c;

	if(a==b or a==c or b==c) cout << "S";
	else if(a+b==c or a+c==b or b+c==a) cout << "S";
	else cout << "N";

	return 0;
}
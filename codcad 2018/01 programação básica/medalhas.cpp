#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int a, b, c;

	cin >> a >> b >> c;

	if(a > b and b > c) cout << "3\n2\n1\n";
	else if(a > c and c > b) cout << "2\n3\n1\n";
	else if(b > a and a > c) cout << "3\n1\n2\n";
	else if(b > c and c > a) cout << "1\n3\n2\n";
	else if(c > b and b > a) cout << "1\n2\n3\n";
	else if(c > a and a > b) cout << "2\n1\n3\n";

	return 0;
}
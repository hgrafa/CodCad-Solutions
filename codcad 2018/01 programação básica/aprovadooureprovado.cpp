#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	float a, b;

	cin >> a >> b;

	a = (a+b)/2;

	if(a >= 7) cout << "Aprovado\n";
	else if(a >= 4) cout << "Recuperacao\n";
	else cout << "Reprovado\n";

	return 0;
}
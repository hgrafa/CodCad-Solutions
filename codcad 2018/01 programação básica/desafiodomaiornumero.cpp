#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int x, maior = -1;

	while(cin >> x and x){
		if(x > maior) maior = x;
	}

	cout << maior << "\n";

	return 0;
}

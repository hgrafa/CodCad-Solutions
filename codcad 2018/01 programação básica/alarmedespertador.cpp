#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int h1, m1, h2, m2;

	while(cin >> h1 >> m1 >> h2 >> m2 and (h1 or m1 or h2 or m2)){
		int x, y;

		x = 60*h1+m1;
		y = 60*h2+m2;

		if(y < x) cout << y-x+1440 << "\n";
		else cout << y-x << "\n";
	}

	return 0;
} 
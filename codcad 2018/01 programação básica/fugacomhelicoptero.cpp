#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	int h, p, f, dir;

	cin >> h >> p >> f >> dir;

	int distpol, distheli;

	if(dir == -1){	

		distpol = f - p;
		distheli = f - h;

	}else{

		distpol = p - f;
		distheli = h - f;

	}

	if(distpol < 0) distpol += 16;
	if(distheli < 0) distheli += 16;

	if(distpol > distheli) cout << "S\n";
	else cout << "N"; 

	return 0;
}
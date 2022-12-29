#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct ponto{
	int x, y;
};

int dist(ponto a, ponto b){
	int deltax, deltay;

	deltax = a.x - b.x;
	deltay = a.y - b.y;
	deltax *= deltax;
	deltay *= deltay;

	int dist = deltax + deltay;

	return dist;
}

int main(void){

	int n, sum = 0;

	cin >> n;

	for(int i=0; i<n; i++){
		ponto a, b;

		cin >> a.x >> a.y >> b.x >> b.y;

		sum += dist(a, b);
	}

	cout << sum << "\n";

	return 0;
}
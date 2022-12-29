#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

char triang(int a, int b, int c){
	if(abs(a-b) >= c or a+b <= c)return 'n';
	else if( abs(b-c) >= a or b+c <= a) return 'n';
	else if( abs(a-c) >= b or a+c <= b) return 'n';

	int v[3];

	v[0] = a;
	v[1] = b;
	v[2] = c;

	sort(v, v+3);

	if(pow(v[2], 2) == pow(v[1], 2) + pow(v[0], 2) ) return 'r';
	else if(pow(v[2], 2) > pow(v[1], 2) + pow(v[0], 2) ) return 'o';
	else return 'a';
}

int main(void){
	int a, b, c;

	cin >> a >> b >> c;

	cout << triang(a, b, c) << "\n";

	return 0;
}
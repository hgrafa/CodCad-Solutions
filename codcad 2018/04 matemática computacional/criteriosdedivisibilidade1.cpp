#include <iostream>
#include <cstdio>
using namespace std;

int main(void){

	string a;

	cin >> a;

	int tam = a.size();

	if((a[tam-1]-48)%2 == 0) puts("S");
	else puts("N");

	int r = 0;

	for(int i=0; i<tam; i++){
		r += a[i]-48;
		r %= 3;
	}

	if(r%3 == 0) puts("S");
	else puts("N");


	if((a[tam-1]-48)%5 == 0) puts("S");
	else puts("N");


	return 0;
}
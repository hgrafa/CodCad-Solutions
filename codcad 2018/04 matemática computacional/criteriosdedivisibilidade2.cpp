#include <iostream>
#include <cstdio>
using namespace std;

int main(void){

	string a;

	cin >> a;

	long long tam = a.size();

	if((a[tam-1]-48 + (a[tam-2]-48)*10 )%4 == 0) puts("S");
	else puts("N");

	int r = 0;

	for(long long i=0; i<tam; i++){
		r += a[i]-48;
		r %= 9;
	}

	if(r%9 == 0) puts("S");
	else puts("N");


	if((a[tam-1]-48 + (a[tam-2]-48)*10 )%25 == 0 or a == "0") puts("S");
	else puts("N");


	return 0;
}
//----------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - matemática com puta adcional
//----------------------------------------------------

#include <iostream>
#include <cstdio>

using namespace std;

//----------------------------------------------------

long long nbit(long long n){

	int cont = 0;

	while( n&(n-1) ){

		n = n&(n-1);
		cont++;

	}

	return cont+1;
}

//----------------------------------------------------

int main(void){

	long long x;

	scanf(" %lld", &x);

	x = nbit(x);

	printf("%lld\n", x);

	return 0;
}

//----------------------------------------------------

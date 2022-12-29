//----------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - matemática computacional
// problem: Fila de 1's
//----------------------------------------------------
// global variables

#include <iostream>
#include <cstdio>

using namespace std;

//----------------------------------------------------

bool power2(long long n){

	if(n&(n-1)) return false;

	return true;
}

//----------------------------------------------------

int main(void){

	long long n;

	scanf(" %lld", &n);

	if( power2(n+1) and n!=0) puts("S");
	else puts("N");

	return 0;
}

//----------------------------------------------------

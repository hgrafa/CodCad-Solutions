//----------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - matmática com puta adcional
// problem: Oráculo de Alexandria
//----------------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

//----------------------------------------------------
// global variables

int n;
string s;

//----------------------------------------------------

int exclamacao(string a){

	int tam = a.size();
	int cont = 0;

	for(char c: a){
		if(c == '!') return (tam-cont);

		cont++;
	}

}

//----------------------------------------------------

int num(string a){

	int r = 0;	
	int pot = 1;

	for(int i=a.size()-1; i>=0; i--){

		if(a[i] != '!'){
			r += (int)(( a[i] - '0' )*pot);
			pot *= 10;
		}

	}

	return r;

}

//----------------------------------------------------

unsigned long long f(int x, int k, int i){

	int davez = (x - k*i);
	// printf("davez = %d\n", davez);

	if(davez <= 0) return 1;

	return davez*f(x, k, i+1);

}	

//----------------------------------------------------

int main(void){

	scanf(" %d\n", &n);

	for(int i=0; i<n; i++){

		cin >> s;

		int n_excla = exclamacao(s);
		int the_num = num(s);

		// printf("num = %d and ! = %d\n", the_num, n_excla);

		unsigned long long result = f(the_num, n_excla, 0);

		printf("%lld\n", result);

	}

	return 0;
}

//----------------------------------------------------

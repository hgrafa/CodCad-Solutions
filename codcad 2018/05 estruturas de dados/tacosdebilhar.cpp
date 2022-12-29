//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - data structs
// problem: tacos de bilhar
//-------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <set>

#define mainha main

using namespace std;

//-------------------------------------------
// global variables

int n, x, cont = 0;
set <int> estoque;

//-------------------------------------------
// the mainha function

int mainha(void){

	scanf("%d", &n);

	for(int i=0; i<n; i++){

		scanf("%d", &x);

		if( estoque.find(x) != estoque.end() )
			estoque.erase(x);
		else
		{
			estoque.insert(x);
			cont += 2;
		}

	}

	printf("%d\n", cont);

	return 0;
}

//-------------------------------------------

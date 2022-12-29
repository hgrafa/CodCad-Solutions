//-------------------------------------------
// Hugo Rafael de Lima 
// CodCad 2018 - data stucts
// problem : troca de cartas
//-------------------------------------------
// libraries and definitions 

#include <iostream>
#include <cstdio>
#include <set>

#define mainha main

using namespace std;

//-------------------------------------------
// global variables

int n, m, x, cont = 0;

set <int> a;
set <int> b;
set <int> ::iterator it;

//-------------------------------------------
// the mainha function

int mainha(void){

	scanf(" %d %d", &n, &m);

	for(int i=0; i<n; i++){
		scanf(" %d", &x);
		a.insert(x);
	}

	for(int i=0; i<m; i++){
		scanf(" %d", &x);
		b.insert(x);
	}

	if( a.size() < b.size() ){

		for(it = a.begin(); it != a.end(); it++){

			if( b.find(*it) == b.end() )cont++;

		}

	}else{

		for(it = b.begin(); it != b.end(); it++){

			if( a.find(*it) == a.end() )cont++;

		}

	}

	printf("%d\n", cont);

	return 0;
}

//-------------------------------------------

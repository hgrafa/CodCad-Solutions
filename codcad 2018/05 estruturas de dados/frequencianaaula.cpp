//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - data stucts
// problem: frequência na aula
//-------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <set>

#define mainha main

using namespace std;

//-------------------------------------------
// global variables

int n, x;
set <int> alunos;

//-------------------------------------------
// the mainha function

int mainha(void){

	scanf(" %d", &n);

	for(int i=0; i<n; i++){
		
		scanf("%d", &x);

		alunos.insert(x);

	}


	printf("%d\n", alunos.size());
}

//-------------------------------------------

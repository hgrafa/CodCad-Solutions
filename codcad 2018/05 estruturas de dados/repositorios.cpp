//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - data structs
// problem: Repositórios
//-------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <map>

#define mainha main
#define mp make_pair

using namespace std;

//-------------------------------------------
// global variables

int n, m;
map <long, long> apps; 
map <long, long> out;
map <long, long> ::iterator it;

//-------------------------------------------
// the main function

int mainha(void){

	scanf(" %d %d", &n, &m);

	for(int i=0; i<n; i++){
		long a, b;

		scanf(" %ld %ld", &a, &b);

		apps	.insert( mp(a, b) );
	}

	for(int i=0; i<m; i++){
		long a, b;

		scanf(" %ld %ld", &a, &b);

		if(apps[a] < b){
			apps[a] = b;

			if(out.find(a) != out.end()){

				if(out[a] < b) out[a] = b;

			}else{
				out.insert( mp(a, b) );
			}

		}
	}

	for(it = out.begin(); it != out.end(); ++it){
		printf("%ld %ld\n", it->first, it->second);
	}

	return 0;
}

//-------------------------------------------

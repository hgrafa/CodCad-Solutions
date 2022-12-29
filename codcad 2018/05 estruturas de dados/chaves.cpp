//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - data structs
// problem: chaves
//-------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <stack>

#define mainha main
#define maxn 1010

using namespace std;

//-------------------------------------------
// global variables

int n;
string linha[maxn];

//-------------------------------------------
// check if is a open char

bool open(char a){

	if(a == '{') return true;

	return false;
}

//-------------------------------------------
// check if is a close char

bool close(char a){

	if(a == '}') return true;

	return false;
}

//-------------------------------------------
// the mainha function

int mainha(void){

	scanf(" %d\n", &n);

	for(int i=0; i<n; i++) getline(cin, linha[i]);

	stack <char> pilha;
	bool L = true;

	for(int i=0; i<n; i++){
		for(char c: linha[i]){

			if(not L) break;

			if( open(c) )
			{
				pilha.push(c); // se abrir eu coloco
			}
			else if( close(c) )
			{
				// se fechar


				if(pilha.empty()) L = false; // vejo se tem algum aberto
				else pilha.pop(); // se tiver eu fecho

			}

		}
	}

	if( not pilha.empty() ) L = false;

	if(L) puts("S");
	else puts("N");

	return 0;
}

//-------------------------------------------

//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - data structs
// problem: expressões
//-------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <stack>

#define mainha main

using namespace std;

//-------------------------------------------
// global variables

string frase;
int n;

//-------------------------------------------
// for open expressions

bool open(char a){

	if(a == '{' or a == '(' or a == '[') return true;

	return false;
}

//-------------------------------------------

bool compatible(char a, char b){

	if(a == '[' and b == ']') return true;

	if(a == '{' and b == '}') return true;

	if(a == '(' and b == ')') return true;

	return false;

}

//-------------------------------------------
// the mainha

int mainha(void){

	scanf(" %d", &n);

	for(int u=0; u<n; u++){

		// make a stack to save my open chars
		stack <char> pilha;

		cin >> frase;

		// I will supose ok
		bool L = true;

		for(int i=0; i < frase.size(); i++){

			char c = frase[i];

			if(not L) break;

			//if is the close case
			if( not open(c) )
			{

				// if I close after open
				if(pilha.empty()) L = false;
				else if( compatible( pilha.top(), c) ) pilha.pop();
				else L = false;

			}
			else
			{
				// open a char
				pilha.push(c);
			}

		}

		// if I finish the operations and my stack not empty
		if(not pilha.empty()) L = false;

		if(L) puts("S");
		else puts("N");
	}

	return 0;
}

//-------------------------------------------

//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - Estruturas de Gados
// problem: O fanstástico Jaspion
//-------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>
#include <string>
#include <map>

#define mainha main
#define mp make_pair

using namespace std;

//-------------------------------------------
// global variables

int ntestes, n, m;
map <string, string> traduz;

//-------------------------------------------
// the main function

int mainha(void){

	scanf(" %d", &ntestes);

	for(int u=0; u<ntestes; u++){

		scanf(" %d %d\n", &n, &m);

		// n para número de traduções
		// m para o número de versos	

		for(int i=0; i<n; i++){

			string a, b;

			getline(cin, a);
			getline(cin, b);

			traduz.insert( mp(a, b) );

		}

		for(int i=0; i<m; i++){

			string verso, acumula;

			getline(cin, verso);

			bool L = true;

			for(int letra: verso){

				if( isspace(letra) ){

					cout << acumula;
					cout << " ";
					acumula = "";

				}else
					acumula += letra;

				if(traduz.find(acumula) != traduz.end() ){

					if(L){
						cout << traduz[acumula];
						L = false;
					}else cout << traduz[acumula];
				
					acumula = "";
				}
			}

			printf("\n");

		}

		printf("\n");

	}

	return 0;
}	

//-------------------------------------------


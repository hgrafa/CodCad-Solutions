// ---------------------------------------------------
// 	Hugo Rafael de Lima
// 	codcad 2018
// 	matemática computacional
// ---------------------------------------------------

#include <iostream>
#define maxn 1300010

using namespace std;

// ---------------------------------------------------

bool compost[maxn];
int 

// ---------------------------------------------------

void crivo(void){

	compost[1] = true;

	for(int i=2; i<= sizeof(compost); i++){

		if(not compost[i]){
			for(int j=2; i*j <= sizeof(compost); j++) compost[i*j] = true;
		}

	}

}

// ---------------------------------------------------

int main(void){
	long q;

	cin >> q;

	crivo();

	for(int u=0; u<q; u++){
		int a;

		cin >> a;

		int cont = 1, i = 1;

		while(true){

			if(not compost[i]){
				if(i == a){
					cout << cont << "\n";
					break;
				}

				cont++;
			}

			i++;
		}
	}

	return 0;
}

// ---------------------------------------------------

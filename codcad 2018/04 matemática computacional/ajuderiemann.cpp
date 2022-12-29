//------------------------------------------------
//	Hugo Rafael de Lima
//	codcad 2018
//	matemática computacional 
//------------------------------------------------

#include <iostream>
#define maxn 12000010

using namespace std;

//------------------------------------------------

bool compost[maxn];

//------------------------------------------------

void crivo(void){

	compost[1] = true;

	for(int i = 2; i <= sizeof(compost); i++){

		if(not compost[i])
			for(int j=2; i*j <= sizeof(compost); j++) compost[i*j] = true;
		
	}

}

//------------------------------------------------

int main(void){
	long n;

	cin >> n;

	crivo();

	int cont = 1, i = 1;
	while(cont <= n){
		if(not compost[i]){
			if(cont == n) cout << i << "\n";
			
			cont++;
		}

		i++;
	}

	return 0;
}

//------------------------------------------------

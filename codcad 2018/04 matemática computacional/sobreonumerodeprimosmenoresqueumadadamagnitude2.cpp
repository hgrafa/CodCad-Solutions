//------------------------------------------------
// 	Hugo Rafael de Lima
// 	codcad / 2018
//  matemática computacional 
//------------------------------------------------

#include <iostream>
#define maxn 10000010

using namespace std;

//------------------------------------------------

bool compost[maxn];

//------------------------------------------------

void crivo(int x){
	compost[1] = true;

	for(int i=2; i<x; i++){

		if(not compost[i]){
			for(int j=2; j*i<=x; j++){
				compost[j*i] = true;
			}
		}
	
	}
}

//------------------------------------------------

int main(void){
	long n;

	cin >> n;

	crivo(n);

	bool L = true;

	for(int i=2; i<=n; i++){
		if(compost[i] == false){
			if(L){
				cout << i;
				L = false;
			}else cout << " " << i;
		}
	}

	cout << "\n";
	return 0;
}

//------------------------------------------------

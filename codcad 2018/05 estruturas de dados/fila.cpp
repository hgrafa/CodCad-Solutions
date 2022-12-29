//-----------------------------------------
// 	Hugo Rafael de Lima	
// 	Codcad 2018
// 	Estruturas de dados
//------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <vector>
#include <algorithm>

#define maxn 50010

using namespace std;

//------------------------------------------
// variáveis globais

int v[maxn], sai[maxn], npessoas, nsai;

//------------------------------------------
// busca binária

bool find(int x){

	int i = 0;
	int f = nsai-1;
	int m;

	while(f >= i){
		m = (f+i)/2;

		if(sai[m] == x) return true;
		else if(sai[m] > x) f = m-1;
		else i = m+1;
	}

	return false;
}

//------------------------------------------
// funão da mainha

int main(void){

	cin >> npessoas;

	for(int i=0; i<npessoas; i++) cin >> v[i];

	cin >> nsai;

	for(int i=0; i<nsai; i++) cin >> sai[i];

	bool L = true;

	sort(sai, sai+nsai);

	for(int i=0; i<npessoas; i++){
		if( not find(v[i]) ){
			if(L){
				cout << v[i];
				L = false;
			}else cout << " " << v[i];
		}
	}

	cout << "\n";

	return 0;
}

//------------------------------------------

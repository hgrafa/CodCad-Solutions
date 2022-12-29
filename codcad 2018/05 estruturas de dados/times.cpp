//------------------------------------------
// 	Hugo Rafael de Lima
//  CodCad 2018
//  Estrutura de dados
//------------------------------------------
// biliotecas e definições

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define habilidade first
#define nome second
#define pub push_back
#define mp make_pair
#define mainha main

using namespace std;

//------------------------------------------
// variáveis globais

int npessoas, ntimes;
vector < pair < int, string > > pessoas;

//------------------------------------------
// função da mainha

int mainha(void){
	ios_base::sync_with_stdio(false);

	cin >> npessoas >> ntimes;

	vector < string > time[ntimes];

	for(int i=0; i<npessoas; i++){
		string a;
		int b;

		cin >> a >> b;

		pessoas.pub( mp(b, a) );
	}

	sort(pessoas.rbegin(), pessoas.rend());

	for(int i=0; i<npessoas; i++) time[i%ntimes].pub( pessoas[i].nome );

	for(int i=0; i<ntimes; i++){

		cout << "Time " << i+1 << "\n";
		bool L = true;

		sort(time[i].begin(),time[i].end() );
		for(auto j: time[i]) cout << j << "\n";
		
		cout << "\n";
	}

	return 0;
}

//------------------------------------------

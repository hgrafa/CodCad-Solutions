// --------------------------------------------------
// Hugo Rafael de Lima
// programa para montar o ranking da OBI 2018
// --------------------------------------------------
// Bibliotecas de definições

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

#define maxn 1010
#define mainha main

// --------------------------------------------------
// Estrutura que cada aluno carrega

struct aluno{
	string nome;
	int n1, n2, n3;
};

// --------------------------------------------------
// Variáveis globais

int n;
aluno v[maxn];

// --------------------------------------------------
// Função para ordenar os alunos

bool cmp(aluno a, aluno b){

	if(a.n3 == b.n3){

		if(a.n2 == b.n2){

			return (a.n1 >= b.n1);

		}else{
			return (a.n2 > b.n2);
		}

	}else{
		return (a.n3 > b.n3);
	}

}

// --------------------------------------------------
// Função da mainha

int mainha(void){

	scanf(" %d\n", &n);

	for(int i=1; i<=n; i++){

		getline(cin, v[i].nome);
			// leio o nome
		scanf(" %d %d %d\n", &v[i].n3, &v[i].n2, &v[i].n1);
			// leio a nota das 3 fases do aluno
	}

	sort(v+1, v+n+1, cmp);

	for(int i=1; i<=n; i++){

		cout << "lugar " << i << ": " << v[i].nome << "\n";

	}

	return 0;
}

// --------------------------------------------------

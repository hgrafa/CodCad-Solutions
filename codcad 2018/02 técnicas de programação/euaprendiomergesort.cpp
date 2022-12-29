//-------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - técnicas de programação
// problem: eu aprendi o merge sort
//-------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>
#include <vector>

#define maxn 100010

using namespace std;

//-------------------------------------------
// variáveis globais

int n, v[maxn], tree[4*maxn];
vector <int> a;

//-------------------------------------------

void build(int node, int l, int r){

	if(l == r){
		tree[node] = v[l];
		return;
	}

	int mid = (l+r)/2;
	int nodel = 2*node;
	int noder = 2*node+1;

	build(nodel, l, mid);
	build(noder, mid+1, r);

	tree[node] = tree[nodel]+tree[noder];

}

//-------------------------------------------

int consult(int node, int l, int r, int start, int end){

}

//-------------------------------------------

void order(){

}

//-------------------------------------------

int main(void){

	scanf(" %d", &n);

	for(int i=1; i<=n; i++) scanf(" %d", &v[i]);

	build(1, 1, n);

	for(int i=1; i<=n; i++)

	return 0;
}	

//-------------------------------------------


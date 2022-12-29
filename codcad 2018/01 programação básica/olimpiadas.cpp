#include <iostream>
#include <algorithm>
#define maxn 110
using namespace std;

struct pais{
	int indentificador, ouro, prata, bronze;
};

pais v[maxn];

bool cmp(pais x, pais y){

	if(x.ouro != y.ouro)
			return (x.ouro > y.ouro);

	else if(x.prata != y.prata) 
			return (x.prata > y.prata);
	
	else if(x.bronze != y.bronze)
			return(x.bronze > y.bronze);
	
	else 
			return (x.indentificador < y.indentificador);
}

int main(void){
	ios_base::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	for(int i=1; i<=n; i++){
		v[i].indentificador = i;
		v[i].ouro = 0;
		v[i].prata = 0;
		v[i].bronze = 0;
		// cout << v[i].indentificador << " ja coloquei\n";
	} 

	for(int i=1; i <= m; i++){
		int o, p, b;

		// cout << "jogo " <<  i << "\n";
		cin >> o >> p >> b;

		v[o].ouro++;
		v[p].prata++;
		v[b].bronze++;
		
	}

	sort(v+1, v+n+1, cmp);

	bool L = true;

	for(int i=1; i<=n; i++){

		if(L){
			cout << v[i].indentificador;
			L = false;
		}else{
			cout << " " << v[i].indentificador;
		}

	}

	cout << "\n";

	return 0;
}
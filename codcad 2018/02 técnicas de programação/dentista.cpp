#include <iostream>
#include <algorithm>

using namespace std;

struct evento{
	int inic, fim;
};

bool cmp(evento x, evento y){
	return (x.fim < y.fim);
}

int main(void){
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	evento consulta[n];

	for(int i=0; i<n; i++) cin >> consulta[i].inic >> consulta[i].fim;

	sort(consulta, consulta+n, cmp);

	int livre = consulta[0].fim;
	int cont = 1;

	for(int i=1; i<n; i++){
		if(consulta[i].inic >= livre){
			livre = consulta[i].fim;
			cont++;
		}
	}

	cout << cont << "\n";


	return 0;
}
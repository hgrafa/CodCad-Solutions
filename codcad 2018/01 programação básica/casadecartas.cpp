#include <iostream>
#include <algorithm>
using namespace std;

struct conjunto{
	int vampiro, deputado, proposta;
};

bool cmp(conjunto x, conjunto y){
	if(x.vampiro == y.vampiro){
		return (x.deputado > y.deputado);
	}else return (x.vampiro > y. vampiro);
}

int main(void){
	ios_base::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	conjunto v[n];

	for(int i=0; i<n; i++){
		cin >> v[i].proposta;

		v[i].deputado = (v[i].proposta/m);
		v[i].vampiro = (v[i].proposta%m);
	}

	sort(v, v+n, cmp);

	for(int i=0; i<n; i++) cout << v[i].proposta << " ";

	cout << "\n";

	return 0;
}
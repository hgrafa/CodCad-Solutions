#include <iostream>
#include <algorithm>
#define maxn 10010
using namespace std;

struct encomenda{
	int tempo, horario;
};

bool cmp(encomenda x, encomenda y){
	if(x.horario != y.horario)
		return (x.horario < y.horario);
	else 
		return (x.tempo > y.tempo);
}

encomenda v[maxn];

int main(void){
	int n;

	cin >> n;

	for(int i=1; i<=n; i++) cin >> v[i].tempo >> v[i].horario;

	int a = 0, tempo = 0;
	bool L = true;

	sort(v+1, v+n+1, cmp);

	for(int i=1; i<=n; i++){

		// cout << "encomenda que leva "<< v[i].tempo << "começando as " << v[i].horario << "\n";
		int b;
		int atraso = max(0, tempo + v[i].tempo - v[i].horario);

		// cout << "o atraso dela foi " << atraso << "\n";

		b = atraso;
			
		if(L){
			a = b;
			L = false;
		}

		tempo += v[i].tempo;
		
		if(b > a) a = b;
	}

	cout << a << "\n";

	return 0;
}
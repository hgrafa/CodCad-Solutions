#include <iostream>
#include <algorithm>
#define maxn 10010
using namespace std;

struct encomenda{
	int tempo, horario;
};

int atraso(int t, int s, int d){
	return max(0, s+t-d);
}

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

	for(int i=1; i<=n; i++){
		a += atraso(v[i].tempo, tempo, v[i].horario);
		temṕo += v[i].tempo;
	}

	cout << a << "\n";

	return 0;
}
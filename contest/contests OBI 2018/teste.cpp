#include <iostream>
#include <algorithm>
#define maxn 100010

using namespace std;

int maximo, minimo, Nfuncionarios;
long long salarios[maxn], r = -1;

//----------------------------------------

long long funciona(int maxi){

	long long cop[Nfuncionarios], saldo = 0;

	for(int i=0; i<Nfuncionarios; i++){
		cop[i] = salarios[i];
		saldo += max((long long)0, cop[i]-maxi);
	}

	for(int i=0; i<Nfuncionarios; i++){
		if(cop[i] < minimo){
			saldo -= (minimo - cop[i] -1);
			cout << cop[i] << " " << saldo << "\n";
		}

		if(saldo < 0) return -1;
	}


	return saldo;
}

//----------------------------------------

void busca(long long o_maior){

	long long i, f, m, s;
	i = 0;
	f = o_maior;

	while(f >= i){
		m = ((i+f)/2);
		s = funciona(m);

		if(s != -1){
			r = m;
			i = m-1;
		}else{
			f = m+1;
		}
	}

}

//----------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);

	cin >> Nfuncionarios >> minimo;

	for(int i=0; i<Nfuncionarios; i++) cin >> salarios[i];

	long long o_maior = salarios[0];

	for(int i=1; i<Nfuncionarios; i++)
	 if(salarios[i] > o_maior) o_maior = salarios[i];

	busca(o_maior);

	cout << r << "\n";

	return 0;
}

//----------------------------------------

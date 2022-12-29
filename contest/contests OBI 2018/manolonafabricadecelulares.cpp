#include <iostream>
#include <vector>
#include <algorithm>;
#define maxn 1000010

using namespace std;

vector <int> v;
long long n, nA=0, nB=0, nC=0;

int busca(int x){

	int i, f, m;

	i = 0;
	f = v.size()-1;

	while(f >= i){
		m = ((i+f)/2);

		if(v[m] == x) return m;
		else if(v[m] > x) f = m-1;
		else i = m+1;

	}

	return -1;
}

int main(void){

	ios_base::sync_with_stdio(false);

	cin >> n;

	for(long long i=0; i<n; i++){
		int x;

		cin >> x;

		v.push_back(x);
	}

	sort(v.begin(), v.end());

	bool naomonteiainda = true, tem3 = true, tem5 = true, tem4 = true;

	for(int i=0; i<n; i++){

		if(v[i] == 1 and ( tem3 or tem4 or tem5)){
			// primeiro tento formar o A

			long tento3, tento4, tento5;
			tento3 = busca(3);
			tento4 = busca(4);
			naomonteiainda = true;

			if(tento3 >= 0 and tem3 and tem5){ // se começo a montar o A
				tento5 = busca(5);
				// se tenho tudo pra montar o a
				if(tento5 >=0 and tem5){
					nA++; //monto o A

					v[i] = 0; // tiro 1
					v[tento3] = 0; // tiro 3
					v[tento5] = 0; // tiro 5
					naomonteiainda = false; // se for true eu nao tento montar 4
					sort(v.begin(), v.end());
					i += 2;
				}else tem5 = false;

			}else tem3 = false;

			if(tento4 >= 0 and naomonteiainda){
				// ja tenho tudo pra montar

				nB++;
				v[i] = 0;
				v[tento4] = 0;
				i += 1;
				sort(v.begin(), v.end());
			}

		}else if(v[i] == 1){
			int j=i;

			while(v[j] == 1){
				v[j] = 0;
				j++;
			}

			sort(v.begin(),v.end());

		}else if(v[i] == 2 and tem4){

			long tento4 = busca(4);

			if(tento4 >= 0){
				nC++;

				v[i] = 0;
				v[tento4] = 0;
				i += 1;
				sort(v.begin(), v.end());
 			}else tem4 = false;

		}else if(v[i] > 2) break;

		//for(int i=0; i<n; i++) cout << v[i] << " ";
	
		//cout << "\n";
	}

	cout << "A: " << nA << "\n";
	cout << "B: " << nB << "\n";
	cout << "C: " << nC << "\n";

	return 0;
}
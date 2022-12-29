#include <iostream>
#include <cstring>
#define maxvert 10010
using namespace std;

int main(void){
	int vert, arest, v[maxvert];

	int cont = 1;

	while(cin >> vert >> arest){
		if(vert == 0 and arest == 0) break;

		memset(v, 0, sizeof(v));

		for(int i=1; i<=arest; i++){
			int x, y;

			cin >> x >> y;

			v[x]++;
			v[y]++;
		}

		int maior = v[0];

		for(int i=1; i<=vert; i++)	if(v[i] > maior) maior = v[i];
		 
		bool L = true;

		cout << "Teste " << cont << "\n";

		for(int i=1; i<=vert; i++){
			if(v[i] == maior){
				if(L){
					cout << i;
					L = false;
				}else cout << " " << i;
			} 
		}

		cout << "\n\n";
		cont++;
	}

	return 0;
}
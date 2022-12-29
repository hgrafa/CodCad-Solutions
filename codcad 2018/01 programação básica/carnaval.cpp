#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	float a, b, c, d, e, maior, menor, soma=0;

	cin >> a;

	menor = a;
	maior = a;
	soma += a;

	cin >> b; 

	if(b > maior) maior = b;
	if(b < menor) menor = b;
	soma += b;

	cin >> c;

	if(c > maior) maior = c;
	if(c < menor) menor = c;
	soma += c;

	cin >> d;

	if(d > maior) maior = d;
	if(d < menor) menor = d;
	soma += d;

	cin >> e;

	if(e > maior) maior = e;
	if(e < menor) menor = e;
	soma += e;

	cout << setprecision(1) << fixed;
	cout << (soma - maior - menor) << "\n";

	return 0;
}
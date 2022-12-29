//----------------------------------------
// 		Hugo Rafael 2018
// 		campo minado
// 		codcad - programação básica
//----------------------------------------

#include <iostream>
#include <cstring>
#define maxn 70
using namespace std;

//----------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);

	int n, v[maxn];

	memset(v, 0, sizeof(v));

	cin >> n;

	for(int i=1; i<=n; i++) cin >> v[i];

	for(int i=1; i<=n; i++) cout << v[i-1] + v[i] + v[i+1] << "\n";

	return 0;
}

//----------------------------------------
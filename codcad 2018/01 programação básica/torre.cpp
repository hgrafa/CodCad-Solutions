#include <iostream>
#define maxn 1010
using namespace std;

int n, v[maxn][maxn], sumlinha[maxn], sumcolun[maxn];

long long peso(int i, int j){

	long long sum=0;

	sum += (sumlinha[i] - v[i][j]);

	sum += (sumcolun[j] - v[i][j]);

	return sum;
}

int main(void){
	ios_base::sync_with_stdio(false);

	cin >> n;

	for(int i=1; i<=n; i++){
		int temp = 0;
		for(int j=1; j<=n; j++){
			cin >> v[i][j];
			temp += v[i][j];
		}

		sumlinha[i] = temp;
	}

	for(int i=1; i<=n; i++){
		int temp = 0;
		for(int j=1; j<=n; j++){
			temp += v[j][i];
		}

		sumcolun[i] = temp;
	}

	long long maiorpeso = peso(0, 0);

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			long long temp = peso(i, j);
			if(temp > maiorpeso){
				maiorpeso = temp;
			}
		}
	}

	cout << maiorpeso << "\n";
	
	return 0;
}
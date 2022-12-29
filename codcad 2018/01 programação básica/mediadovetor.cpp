#include <iostream>
#include <cstdio>

using namespace std;

double media(int n, int a[]){
	int sum = 0;

	for(int i=0; i<n; i++) sum += a[i];

	return ((double)sum/n);
}

int main(){	
	
	int n, a[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> a[i];

	printf("%.2lf\n", media(n, a) );

	return 0;
}

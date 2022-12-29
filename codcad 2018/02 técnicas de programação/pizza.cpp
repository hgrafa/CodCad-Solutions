//----------------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - Técnicas de procrastinação
// problem: Pizza
//----------------------------------------------------
/* 		SOME IDEAS ABOUT THIS PROBLEM
	basically is a dp to answer the bigger contigue sum subsequence
and to make this i will walk on array and test if better add new 
element or reignite the sum position by position...

OBS-> in this problem the sum is circular

*/
//----------------------------------------------------
// libraries and definitions

#include <iostream>
#include <cstdio>

#define maxn 100010

using namespace std;

//----------------------------------------------------
// global variables

int n, v[2*maxn], dp[2*maxn];

//----------------------------------------------------

void sum(int v[], int tam){

	dp[0] = 0;
	dp[1] = max(dp[1], 0);	
	int contigue = 0;

	for(int i=2; i<tam; i++){

		if(contigue > tam/2)
			dp[i] = 0;
		

		dp[i] = max(0, dp[i-1]+v[i]);

		if(dp[i]) contigue++;
		else contigue = 0;

	}

}	

//----------------------------------------------------
// the main function

int main(void){

	scanf(" %d", &n);

	for(int i=1; i<=n; i++){
		scanf(" %d", &v[i]);	
		v[n+i] = v[i];
	} 		

	int maior = dp[0];

	sum(v, 2*n);

	for(int i=0; i<2*n; i++){
	
		printf("%d ", dp[i]);
		maior = max(dp[i], maior);
	}

	printf("\n%d\n", maior);

	return 0;
}

//----------------------------------------------------

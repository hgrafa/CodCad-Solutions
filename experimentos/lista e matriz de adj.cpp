//------------------------------------------------
// Hugo Rafael de Lima
// Pré OBI 2a fase 2019
//------------------------------------------------
// bibliotecas e definiçoes

#include <cstdio>
#include <cstring>
#include <vector>

#define maxVert 1010

using namespace std;

//------------------------------------------------
// variaveis globais

int Nvert, Narest;
vector <int> grafoL[maxVert];
int grafoM [maxVert][maxVert];

//------------------------------------------------
// função pra printar matriz de ajacência

void print_matriz(void){
	for(int i=1; i<=Nvert; i++){
		for(int j=1; j<=Nvert; j++) printf("%d ", grafoM[i][j]);
		printf("\n");
	}
}

//------------------------------------------------

void print_lista(void){
	for(int i=1; i<=Nvert; i++){
		printf("Lista %d:", i);
		for(int j=0; j<grafoL[i].size(); j++) printf(" %d", grafoL[i][j]);
		printf("\n");
	}
}

//------------------------------------------------
// função principal

int main(void){

	scanf(" %d %d", &Nvert, &Narest);

	for(int i=0; i<Narest; i++){
		
		int vertA, vertB;
		scanf(" %d %d", &vertA, &vertB);

		// para matriz de ajacência;
		grafoM[vertA][vertB]=1;
		grafoM[vertB][vertA]=1;

		// para a lista de ajacência
		grafoL[vertA].push_back(vertB);
		grafoL[vertB].push_back(vertA);

	}

	print_matriz();

	print_lista();

	return 0;
}

//------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main(void){
  int tam;

  scanf("%d", &tam);

  int matriz[tam][tam];

  for(int i=0; i < tam; i++){
    for(int j=0; j <tam; j++){
      scanf("%d", &matriz[i][j]);
    }
  }

  int teste = 0;

  for(int i=0; i < tam; i++){
    teste += matriz[i][i];
  }

  int diag = 0, soma_da_coluna = 0, soma_da_linha = 0;

  for(int i=0; i < tam; i++){
    diag += matriz[i][tam-i-1];
  }

  if(diag != teste){
    puts("-1");
    return 0;
  }

  for(int i=0; i < tam; i++){
    for(int j=0; j < tam; j++){
      soma_da_linha += matriz[i][j];
    }

    // printf("%d\n", soma_da_linha);

    if(soma_da_linha != teste){
      puts("-1");
      return 0;
    }else{
      soma_da_linha = 0;
    }
  }

  for(int i=0; i < tam; i++){
    for(int j=0; j < tam; j++){
      soma_da_coluna += matriz[j][i];
    }

    if(soma_da_coluna != teste){
      puts("-1");
      return 0;
    }else{
      soma_da_coluna = 0;
    }
  }

  printf("%d\n", teste);

  return 0;
}
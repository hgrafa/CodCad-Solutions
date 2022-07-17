#include <stdio.h>

int main(){
  int h, p, f, sent;  //declaro minhas variaveis

  scanf("%d %d %d %d", &h, &p, &f, &sent); //entro com as minhas variaveis

  while(f!=p && f!=h){
    if(sent == -1){ // se o sentido for horario
      f--;
      if(f==-1) f=15;
    }

    if(sent == +1){ // se o sentido for anti horario
      f++;
      if(f==16) f=0;
    }
  }

  if(f == h) printf("S\n"); // se o fugitivo encontra o elicoptero
  else if(f == p) printf("N\n"); // se o fugitivo encontra o policial


  return 0;
}
#include <stdio.h>

int main(){
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if(a==b or a==c or b==c){

    printf("S\n");
    return 0;

  }else if(a==(b+c) or b==(a+c) or c==(a+b)){

    printf("S\n");
    return 0;
    
  }else printf("N\n");

  return 0;
}
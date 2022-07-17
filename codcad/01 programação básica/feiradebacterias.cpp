#include <bits/stdc++.h>
using namespace std;

int main(void){
  double d, c, maior;

  int n, indtop = 0;

  scanf("%d", &n);

  scanf("%lf %lf", &d, &c);

  maior = c*log(d);

  for(int i=1; i < n; i++){
    double temp;

    scanf("%lf %lf", &d, &c);

    temp = c*log(d);

    if(temp > maior){
      maior = temp;
      indtop = i;
    }

  }

  printf("%d\n", indtop);


  return 0;
}
#include <stdio.h>
#include <algorithm>

int main(){
  double v[5];

  for(int i=0; i<5; i++)
    scanf("%lf", &v[i]);

  std::sort(v, v+5);

  printf("%.1lf\n", v[1]+v[2]+v[3]);

  return 0;
}
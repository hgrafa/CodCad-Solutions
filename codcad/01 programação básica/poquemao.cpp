#include <bits/stdc++.h>
using namespace std;

int main(void){
  int xp, v[3];

  scanf("%d %d %d %d", &xp, &v[0], &v[1], &v[2]);

  sort(v, v+3);

  if(xp >= v[0] + v[1] + v[2])
    puts("3");
  else if(xp  >= v[0] + v[1])
    puts("2");
  else if(xp >= v[0])
    puts("1");
  else
    puts("0");

  return 0;
}
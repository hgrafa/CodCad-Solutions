#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  long long a, b, c, d;

  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

  long long num, dem, mdc;

  num = (a*d+b*c);
  dem = b*d;
  mdc = __gcd(num, dem);

  num /= mdc;
  dem /= mdc;

  printf("%lld %lld\n", num, dem);

  return 0;
}
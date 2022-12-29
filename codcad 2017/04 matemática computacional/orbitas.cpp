	#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
  long long a, b;

  scanf("%lld %lld", &a, &b);

  if(b > a){
    long long temp;
    temp = a;
    a = b;
    b = temp;
  }

  long long mdc = __gcd(a, b);

  a /= mdc;

  printf("%lld\n", (a*b));

  return 0;
}
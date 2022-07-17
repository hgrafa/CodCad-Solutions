#include <iostream>
using namespace std;
int main(){
	int h1, m1, h2, m2, a, b;
	0 <= h1 and h1 <= 23; 0 <= m1 and m2 <= 59;
	0 <= h2 and h2 <= 23; 0 <= m2 and m2 <= 59;
	while(cin >> h1 >> m1 >> h2 >> m2){
		if(h1==0 and m1==0 and h2==0 and m2==0){break;}
		a = 60*h1+m1;
		b = 60*h2+m2;
		
		if(a<=b){cout<<b-a;}
		if(a>b){cout<<b-a+60*24;}
		
	}
}
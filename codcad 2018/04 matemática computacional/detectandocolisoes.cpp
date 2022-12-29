//--------------------------------------

#include <iostream>
using namespace std;

//--------------------------------------

long x0, x1, y0, y1;
long a, b, c, d;

//--------------------------------------

int test(int x,int y){

	// cout << x << " " << y << "\n";

	if(x >= x0 and x <= x1 and y >= y0 and y <= y1){
		// cout << "ta dentro\n";
		return 1;
	}else{
		// cout << "ta fora\n";
		return 0;
	}

}

//--------------------------------------

bool igual(){

	if(a == x0 and b > y0 and b < y1) return true;
	if(a == x0 and d > y0 and d < y1) return true;
	if(b == y0 and a > x0 and a < x1) return true;
	if(b == y0 and c > x0 and c < x1) return true;
	if(c == x1 and b > y0 and b < y1) return true;
	if(c == x1 and d > y0 and d < y1) return true;
	if(d == y1 and a > x0 and a < x1) return true;
	if(d == y1 and c > x0 and c < x1) return true;
	if(a == x1 and b > y0 and b < y1) return true;
	if(a == x1 and d > y0 and d < y1) return true;
	if(b == y1 and a > x0 and a < x1) return true;
	if(b == y1 and c > x0 and c < x1) return true;
	if(c == x0 and b > y0 and b < y1) return true;
	if(c == x0 and d > y0 and d < y1) return true;
	if(d == y0 and a > x0 and a < x1) return true;
	if(d == y0 and c > x0 and c < x1) return true;

	return false;

}

//--------------------------------------

int main(void){
	
	cin >> x0 >> y0 >> x1 >> y1;

	if(x0 > x1){
		int temp = x0;
		x0 = x1;
		x1 = temp;
	}

	if(y0 > y1){
		int temp = y0;
		y0 = y1;
		y1 = temp;
	}

	cin >> a >> b >> c >> d;

	int sum = 0;

	sum += test(a, b);
	sum += test(a, d);
	sum += test(c, b);
	sum += test(c, d);

	if(igual()) cout << "1\n";
	else if(sum == 1 or sum == 2 or sum == 3) cout << "1\n";
	else cout << "0\n";	

	return 0;
}

//--------------------------------------

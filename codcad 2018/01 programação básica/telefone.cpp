#include <iostream>
#include <string>
using namespace std;

char convert(char x){

	if(x == '-' or (x > 47 and x < 58)) return x;
	

	if(x == 'A' or x == 'B' or x == 'C') return '2';
	else if(x == 'D' or x == 'E' or x == 'F') return '3';
	else if(x == 'G' or x == 'H' or x == 'I') return '4';
	else if(x == 'J' or x == 'K' or x == 'L') return '5';
	else if(x == 'M' or x == 'N' or x == 'O') return '6';
	else if(x == 'P' or x == 'Q' or x == 'R' or x == 'S') return '7';
	else if(x == 'T' or x == 'U' or x == 'V') return '8';
	else return '9';

}

int main(void){
	ios_base::sync_with_stdio(false);

	string a;

	cin >> a;

	for(int i=0; i < (a.size()); i++){
		a[i] = convert(a[i]);
		cout << a[i];
	}

	cout << "\n";
	
	return 0;
}
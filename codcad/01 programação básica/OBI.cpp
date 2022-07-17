#include <iostream>
using namespace std;
int main()
{
	int  N, P, X, Y, w;
	cin >> N >> P;
	w = 0;
	
	1 <= N <= 1000;
	1 <= P <= 1000;
	0 <= X <= 400;
	0 <= Y <= 400;
	
	
	for (int i = 0; i < N; i++){
		cin >> X >> Y;
		if (X+Y >= P){
			w = w+1;
		}
	}	cout << w;
}
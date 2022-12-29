#include <iostream>
#include <vector>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);

	int v[6], x, a=0, b=0, c=0;
	long n;

	for(int i=0; i<6; i++) v[i] = 0;

	cin >> n;

	for(long i=0; i<n; i++){
		cin >> x;

		v[x]++;

		if(v[1] and v[3] and v[5]){
			v[1]--;
			v[3]--;
			v[5]--;
			a++;
		}else if(v[1] and v[4]){
			v[1]--;
			v[4]--;
			b++;
		}else if(v[2] and v[4]){
			v[2]--;
			v[4]--;
			c++;
		}
	}

	cout << "A: " << a << "\n";
	cout << "B: " << b << "\n";
	cout << "C: " << c << "\n";

	return 0;
}
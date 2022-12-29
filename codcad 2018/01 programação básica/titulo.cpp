#include <iostream>
#include <string>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);

	string a;

	getline(cin, a);

	if(a[0] >= 97 and a[0] <= 122) a[0] -= 32;

	for(int i=1; i< a.size(); i++){
		if(a[i-1] == ' ' and a[i] >= 97 and a[i] <= 122) a[i] -= 32;
		else if(a[i-1] != ' ' and a[i] >= 65 and a[i] <= 90) a[i] += 32;
	}

	cout << a << "\n";

	return 0;
}
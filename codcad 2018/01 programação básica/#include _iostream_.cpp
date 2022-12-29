#include <iostream>
#include <string>

using namespace std;

string title(string a){

	//isupper islower
	//toupper tolower

	toupper( a[0]);

	for(int i=1; i< a.size(); i++){

		if(a[i-1] == ' ') toupper(a[i]);
		else tolower(a[i]);
		
	}

	return a;

}

int main(){ 
	ios_base::sync_with_stdio(false);

	string a;

	getline(cin, a);

	cout<<title(a)<<"\n";
}

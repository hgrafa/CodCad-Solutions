#include <iostream>
#include <vector>
#include <algorithm>
#define maxvert 100010
using namespace std;
// ------------------------------------------

vector <int> grafo[maxvert];
long long n, m;

// ------------------------------------------

bool search(vector<int> v, int x){
	sort(v.begin(), v.end());
	long i, f, m;
	i = 0;
	f = v.size()-1;

	while(f >= i){
		m = (i+f)/2;

		if(v[m] == x) return true;
		else if(v[m] > x) f = m-1;
		else i = m+1;
	}


	return false;
}

// ------------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for(int i=0; i<m; i++){
		long long a, b, c;

		cin >> a >> b >> c;
	
		if(a == 0){

			if( search(grafo[b], c)) cout << "1\n";
			else cout << "0\n";
		
		}else{

			grafo[b].push_back(c);
			grafo[c].push_back(b);

		}

	}

	return 0;
}

// ------------------------------------------

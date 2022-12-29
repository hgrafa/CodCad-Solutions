#include <iostream>
#include <vector>
#include <algorithm>
#define maxn 100010

using namespace std;

vector <int> v[maxn];

bool busca(vector <int> v, int x){
	
	sort(v.begin(), v.end());
	int i, m, f;

	i=0;
	f = v.size()-1;

	while(f >= i){
		m = ((i+f)/2);

		if(v[m] == x) return true;
		else if(v[m] > x) f = m-1;
		else i = m+1;
	}

	return false;
}

int main(void){
	ios_base::sync_with_stdio(false);

	int n, m, a, b;
	bool t;

	cin >> n >> m;

	for(int i=0; i<m; i++){
		cin >> t >> a >> b;

		if(t){
			v[a].push_back(b);
			v[b].push_back(a);
		}else{
			if(busca(v[a], b)) cout << "1\n";
			else cout << "0\n";

		}
	}

	return 0;
}

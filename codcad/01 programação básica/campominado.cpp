#include <iostream>
using namespace std;
int main(){
	int N;
	1 <= N and N <= 50;
	cin >> N;
	int v[51];
	for(int j=0;j<51;j++){ v[j]=0;}
	for(int u=0; u<N; u++){cin >> v[u];}
	for(int i=0; i<N; i++){
		if(i==0){
			cout << v[i]+v[i+1] <<endl;
		}else if(i==N-1){
			cout << v[i-1]+v[i] <<endl;
		}else{
			cout << v[i-1]+v[i]+v[i+1] << endl;
		}
	}
	return 0;
}
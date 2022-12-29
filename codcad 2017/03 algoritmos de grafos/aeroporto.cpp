#include <iostream>

using namespace std;

int main(){
  int c=0;
  ios_base::sync_with_stdio(false);

  while(true){
    int v, a, x, y;

    cin >> v >> a;

    if(a+v == 0) break;

    int f[v], maior;

    for(int i=0;i<v;i++) f[i]=0;

    for(int i=1; i<=a; i++){
      cin >> x >> y;

      f[x-1]++;
      f[y-1]++;
    }

    maior = f[0];

    for(int i=1; i<v; i++){
      if(f[i] > maior) maior = f[i];
    }

    cout << "Teste " << ++c << "\n";

    for(int i=0; i<v; i++){
      if(f[i] == maior) cout << i+1 << " ";
    }

    cout << "\n\n";

  }

  return 0;
}
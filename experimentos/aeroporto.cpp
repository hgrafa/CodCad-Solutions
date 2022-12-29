#include <bits/stdc++.h>

using namespace std;



int main(){
    int nvert,narest;
    int grau[11000];
    int cont=0;
    nvert=1;
    narest=1;

    while(nvert and narest){
        int maior = 0;
        cont++;
        cin>>nvert>>narest;


        for(int i=1;i<=nvert;i++)grau[i]=0;

        for(int i=1;i<=narest;i++){
            int a,b;
            cin>>a>>b;
            grau[a]++;
            grau[b]++; 
            maior=max(maior,grau[a]);
            maior=max(maior,grau[b]);
        }

        cout << "Teste " << cont << "\n";

         for (int i = 1; i <= nvert; i++)
            if(maior == grau[i]) cout << i << " ";

        cout << "\n\n";

    }

    return 0;
}
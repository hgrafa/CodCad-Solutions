#include <bits/stdc++.h>

#define Nmax 110
using namespace std;

int m_adj[Nmax][Nmax];

int main(){
    int nvert,narest;

    cin >> 

    int a, b, t;
    for(int i =1;i<=nvert;i++){
      
        cin>>t>>a>>b;
        if(t==0){
            if(m_adj[a][b]){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
        }
        if(t==1){
            m_adj[a][b]=1;
            m_adj[b][a] = 1;
        }   
    }
}

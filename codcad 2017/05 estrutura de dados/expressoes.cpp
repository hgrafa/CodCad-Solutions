#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;

    scanf("%d\n", &n);

    for(int i=0; i < n; i++){
        string a;
        cin >> a;
        stack <char> pilha;

        int  L = 1;

        for(int j=0; j < a.size(); j++){
            if(a[j] == '(' || a[j] =='[' or a[j]=='{'){
                pilha.push(a[j]);
            }

            if(a[j] == ')' or a[j]==']' or a[j]=='}')
              if(pilha.empty()){ L=0; break;}

            if(a[j] == ')' or a[j]==']' or a[j]=='}'){
                if(a[j]=='}' && pilha.top()=='{'){
                    pilha.pop();
                }else if(a[j]==']' && pilha.top()=='[' ){
                    pilha.pop();
                }else if(a[j]==')' && pilha.top()== '('){
                    pilha.pop();
                }else{
                  L=0;
                }
            }
        }

        if(L==0 or !pilha.empty()) puts("N");

        if(pilha.empty() and L==1) puts("S");

    }

    return 0;
}
//----------------------------------------------
// Hugo Rafael de Lima
// CodCad 2018 - Estrutura de dados
// problem: Guildas
//----------------------------------------------
// bibliotecas e definições

#include <iostream>
#include <cstdio>
#include <cstring>

#define mainha main
#define maxn 100010

using namespace std;

//----------------------------------------------
// variáveis globais

int n, m, pai[maxn], score[maxn], peso[maxn];

//----------------------------------------------
// função que encontra o patriarca

int find(int x){

    if(pai[x] == x) return x;

    return pai[x] = find(pai[x]);
}

//----------------------------------------------
// função que une dois patriarcas em uma família

void merge(int x, int y){

    // vou trabalhar só com os responsáveis
    x = find(x);
    y = find(y);

    if(peso[x] > peso[y]){
        pai[y] = x;
        score[x] += score[y];
    }else if(peso[y] > peso[x]){
        pai[x] = y;
        score[y] += score[x];
    }else{
        pai[x] = y;
        score[y] += score[x];
        peso[y]++;
    }

}

//----------------------------------------------
// função que simula uma batalha de guildas
// ela retorna verdadeiro ou falso pra se rafael ganha

bool battle(int x, int y){

    x = find(x);
    y = find(y);
    int rafa = find(1);

    if(rafa == x){
        if(score[x] > score[y]) return true;
        else return false;
    }else if(rafa == y){
        if(score[x] > score[y]) return false;
        else return true;
    }else
        return false;
}

//----------------------------------------------
// função principal

int main(void){

    while(scanf(" %d %d", &n, &m) ){

        if(not m and not n) break;

        int win = 0;

        for(int i=1; i<=n; i++) scanf(" %d", &score[i]);

        for(int i=1; i<=n; i++) pai[i] = i;

        for(int i=1; i<=m; i++){
            
            int op, a, b;

            scanf(" %d %d %d", &op, &a, &b);

            if(op == 1){
                // merge guilds
                merge(a, b);
            }else if(op == 2){
                // battle between guilds
                if(battle(a, b)) win++; 
            }

        }

        printf("%d\n", win);
        
        memset(peso, 0, sizeof(peso));
    }

    return 0;
}

//----------------------------------------------

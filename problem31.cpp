#include <bits/stdc++.h>

using namespace std;


int N, coins[8] = {1,2,5,10,20,50,100,200};


void solve(){
    
    cin >> N;

    int ways[N+1] = {0};

    ways[0] = 1;
    
    for (int coin=0; coin<8; coin++){
    
        for (int i=0; i+coins[coin]<=N; i++){
        
            ways[i+coins[coin]] += ways[i];
        }
    }
    
    cout<<ways[N]<<"\n";
}


int main(){

    ios::sync_with_stdio(0);
    
    cin.tie(0);
    
    solve();
    
    return 0;
}
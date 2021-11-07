#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve(){

    ll c = 1;

    string s = "0123456789";
    
    while(next_permutation(s.begin(),s.end())){
        c += 1;
        
        if (c==1000000){
        
            cout<<s<<"\n";
        
            break;
        }
    }
}


int main(){

    ios::sync_with_stdio(0);
    
    solve();
    
    return 0;
}
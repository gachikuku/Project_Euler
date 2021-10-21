#include <bits/stdc++.h>

using namespace std;

#define ll long long
 


void solve(){

    ll mod = 1e10;
    
	ll ans = 1;
	
	for (ll i = 1; i<= 7830457; ++i){
	
	    ans = (ans * 2) % mod;
	}
	
	ans = (ans * 28433) % mod;
	
	ans++;

	cout<<ans<<"\n";
}


int main(){

    ios::sync_with_stdio(0);
   
    solve();
   
    return 0;
}
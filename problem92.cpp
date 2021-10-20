#include <bits/stdc++.h>

using namespace std;


long squareDigits(long n){

    long s = 0;
    
    while (n != 0){
    
        s += (n % 10) * (n % 10);
        
        n /= 10;
    }
    
    return s;
}


long chain(long n){

    while (n){
    
        n = squareDigits(n);
        
        if (n == 89) {return 89;}
            
        else if (n == 1) {return 1;}
    }
}



void solve(){

    long ans = 0;
    
    for (long i = 2; i < 10000000; i++){
    
        if (chain(i) == 89) {ans += 1;}
    }
    
    cout<<ans<<"\n";
}



int main(){

    ios::sync_with_stdio(0);
   
    solve();
   
    return 0;
}
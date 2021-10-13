#include <bits/stdc++.h>

using namespace std;

 

long fact(long n){

    if (n == 0 or n == 1){return 1;}

    long ans = 1;

    for (long i = 1; i <= n; i++){
    
        ans *= i;
    }
    
    return ans;
}


vector<long> digits(long n){

    vector<long> D;
    
    while (n != 0){
    
        long r = n%10;
        
        n /= 10;
        
        D.push_back(r);
    }
    
    return D;
}



int main(){

    long ans, c = 0;
    
    upper_lim = fact(9);
    
    // 7 * 9999999 > 9! * 7 
    
    for(long x = 3; x <= upper_lim; x++){
    
        for (auto i: digits(x)){
    
            c += fact(i);
        }

        if (c == x){
    
            ans += x;
        }
    
        c = 0;
    }
    
    cout << ans << endl;
    
    return 0;
}
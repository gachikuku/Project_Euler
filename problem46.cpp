#include <bits/stdc++.h>

using namespace std;



bool isPrime(int n){

    if (n <= 1) {return false;}
        
    for (int i = 2; i <= sqrt(n); i++){

        if (n % i == 0) {return false;}
    }

    return true;
}


bool Goldbach(int n){

    for (int i = 2; i < n; i++){
    
        if (isPrime(i) == 1){
    
            for (int j = 1; j < n; j++){
                
                if (i + (j*j*2) == n){
                
                    return true;
                }
            }
        }
    }
    
    return false;
}



int main(){

    int ans = 9;
    
    while (ans){
        
        if (isPrime(ans) == 1){
        
            ans += 2;
        }
    
        else if (Goldbach(ans) == 0){
        
            cout << ans << "\n";
            
            break;
        }
        
        ans += 2;
    }

    return 0;
}
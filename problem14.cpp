#include <bits/stdc++.h>

using namespace std;



long Collatz(long n){

    long res = 1;

    while (n != 1){
    
        if (n % 2 == 0){n = n / 2;}
        
        else {n = 3*n + 1;}
        
        res++;
    }
    
    return res;
}



int main(){

    long longest_chain = 0;
    
    long ans;
    
    for (long i = 1; i < 1000000; i++){
    
    
        if (Collatz(i) > longest_chain){
        
            longest_chain = Collatz(i);
            
            ans = i;
        }
    }
    
    cout << ans <<" "<< longest_chain<< endl;

    return 0;
}
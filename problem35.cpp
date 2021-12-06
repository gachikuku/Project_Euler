#include <bits/stdc++.h>

using namespace std;


int ans = 0;


bool isPrime(int n){

    if (n <= 1) {return false;}
        
    for (int i = 2; i * i <= n; i++){

        if (n % i == 0) {return false;}
    }

    return true;
}


int digitlen(int n){

    int cnt = 0;
    
    while(n > 0){
    
        cnt++;
        
        n /= 10;
    }
    
    return cnt;
}
 

void solution(int num){

    if(isPrime(num)){
    
        int temp = 0;

	    int digits = digitlen(num);
	    
	    int powTen = pow(10, digits - 1);
	    
	    int left = num;
	    
	    if(isPrime(left)){
	        
	        temp++;
	        
	        if(digits==temp) {ans++;}
	    }
	 
	    for (int i = 0; i < digits - 1; i++) {
	 
	        int firstDigit = num / powTen;
	 
	        left
	            = ((num * 10) + firstDigit)
	            - (firstDigit * powTen * 10);
	            
	        if(isPrime(left)){
	        
	            temp++;
	        
	            if(digits==temp) {ans++;}
	        }
	              
	        num = left;
	    }
    }
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie();
    
    for(int i=2; i<1000000; i++){
    
        solution(i);
    }
    
    cout << ans << "\n";
    
    return 0;
}
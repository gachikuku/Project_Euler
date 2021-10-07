#include <bits/stdc++.h>

using namespace std;


const int upper_b = 28123;

set <int> abundant_nums;



int d(int n){


    int d_sum = 0;
    
    int i = 1;

    while (i*i <= n){

        if (n%i == 0){

            d_sum += i;

            if (n/i != i){

                d_sum += n/i;
            }

        }
        
        i++;
    }
    
    return d_sum - n;
}




bool isAbundantSum(int x){


    if (x >= upper_b){
    
        return true;
        

    for (auto i : abundant_nums){

        if (i >= x){
      
            return false;
        }
    
        if (abundant_nums.count(x-i) == 0){
      
            continue;
        }
 
        return true;
    }

    return false;
}







int main(){


    long long ans = 0;
    
    
    for (int i = 1; i <= upper_b+1; i++){
    
        if (d(i) > i){
        
            abundant_nums.insert(i);
        }
    }
    
    
    for (int i=0; i <= upper_b; i++){
    
        if(!isAbundantSum(i)){
        
            ans += i;
        }
    }
    
    
    cout << ans << endl;

    return 0;
}
 
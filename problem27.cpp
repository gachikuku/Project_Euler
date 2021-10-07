#include <bits/stdc++.h>

using namespace std;


typedef pair<int, int> pairs;



bool isPrime(int n){


    if (n <= 1) {return false;}
        
    for (int i = 2; i <= sqrt(n); i++){

        if (n % i == 0) {return false;}
    }

    return true;
}




int q_sum(int n, int i, vector<pairs>& A){
    
    return (n*n)+(A[i].first*n)+A[i].second;
}




int main(){


    vector<pairs> A;
    
    int n = 0;
    
    int high_score = n;
    
    
    for (int a = -999; a <= 999; a++){
    
        for (int b = -1000; b <= 1000; b++){
            
            pairs x = make_pair(a, b);
            
            A.push_back(x);
        }
    }
    
    
    for (int i = 0; i < A.size(); i++){
    
        while (isPrime(q_sum(n,i,A))==true){
            
            if (n > high_score){
            
                high_score = n;
                
                cout << n << " " << A[i].first
                << " " << A[i].second <<
                " " << q_sum(n, i, A) << endl;
            }
            
            if (isPrime(q_sum(n,i,A))==false){
                
                n = 0;
                
                break;
            }
            
            n++;
        }
    }

    return 0;
}
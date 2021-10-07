#include <bits/stdc++.h>

using namespace std;


int* GetBigInteger(string str) { 

    int x = str.size(), a = 0; 


    int* arr = new int[str.size()]; 

    while (a != x) { 

        arr[a] = str[a] - '0'; 

        a++; 
    } 

    return arr; 
}


int countDigits(long long n){

    return floor(log10(n)+1);
}


long F(int n){

    long a = 0, b = 1, c;

    if (n == 0){return a;}

    for (long i = 2; i <= n; i++){

       c = a + b;

       a = b;

       b = c;
    }

    return b;
}


int main(){

    
    string str = "12345678098765431234567809876543"; 


    int* arr = GetBigInteger(str); 

    for (int i = 0; i < str.size(); i++) { 

        cout << arr[i]; 
    }

    cout << " " << endl;

    return 0;
}
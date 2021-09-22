#include <bits/stdc++.h>

using namespace std;


int d(int n){

    int d_sum =0;

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



int main(){

    int b;

    int Asum = 0;

    for (int a=2; a <= 10000; a += 2){

        b = d(a);

        if (b > a){

            if (d(b) == a){

                Asum += a+b;

            }

        }

    }

    cout << Asum << endl;

    system("Pause");

    return 0;
}

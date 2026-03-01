//overflow and precesion error for competitive programming
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1000000000; // 1 billion
    int b = 1000000000; // 1 billion
    long long int c = (long long)a * b; // using long long to prevent overflow
    cout << c << endl; // should output 1000000000000000000

    // double x = 0.1;
    // double y = 0.2;
    // double sum = x + y;
    // cout << sum << endl; // may not output exactly 0.3 due to precision error

    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){//sum of digits of a number
    int n;
    cin >> n;
    int sum = 0;
    while(n > 0){
        int digit = n % 10; // get the last digit
        sum += digit; // add the digit to the sum
        n /= 10; // remove the last digit
    }   
    cout << sum << endl; // output the sum of digits

    }
}
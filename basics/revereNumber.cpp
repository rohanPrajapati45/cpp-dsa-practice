//Reverse a given number 
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n ;
    int rev =0;
    while (n>0){
        int LastDigit = n%10;
        rev = rev*10 + LastDigit ;
        n = n/10 ;

    }
    cout << "Reversed number: " << rev << endl ;
    return 0 ;
}
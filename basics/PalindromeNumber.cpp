//Palindrome Number
#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter a number: ";
    cin >> n ;
    int rev =0;
    int temp = n ;
    while (temp>0){
        int LastDigit = temp%10;
        rev = rev*10 + LastDigit ;
        temp = temp/10 ;

    }
    if (rev == n){
        cout << "Palindrome number" << endl ;
    }
    else{
        cout << "Not a palindrome number" << endl ;
    }
    
    return 0 ;
}
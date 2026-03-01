#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5, b = 10;
    cout << "a + b = " << a + b << endl; // addition
    cout << "a - b = " << a - b << endl; // subtraction
    cout << "a * b = " << a * b << endl; // multiplication
    cout << "b / a = " << b / a << endl; // division
    cout << "b % a = " << b % a << endl; // modulus

    int c = 5; 
    cout << c++ << " c "<< endl;// increment
    cout << c << endl;
    c--; // decrement
    cout << "c after decrement: " << c << endl;

    cout<< endl;

    // Comparison operators
    cout << "a == b: " << (a == b) << endl; //
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout <<endl;

    // Logical operators
    bool x = true, y = false;
    cout << "x && y: " << (x && y) << endl; // logical AND
    cout << "x || y: " << (x || y) << endl; //
    cout << "!x: " << (!x) << endl; // logical NOT

    cout <<endl;

     // Assignment operators
    int d = 5;
    d += 3; // equivalent to d = d + 3
    cout << "d after += 3: " << d << endl;  
    d -= 2; // equivalent to d = d - 2
    cout << "d after -= 2: " << d << endl;
    d *= 4; // equivalent to d = d * 4
    cout << "d after *= 4: " << d << endl;
    d /= 2; // equivalent to d = d / 2
    cout << "d after /= 2: " << d << endl;
    d %= 3; // equivalent to d = d % 3
    cout << "d after %= 3: " << d << endl;


    return 0;
}
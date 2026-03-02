//string access and manipulation
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Accessing characters
    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length() - 1] << endl;

    // Modifying characters
    str[7] = 'w';
    cout << "Modified string: " << str << endl;

    // Substring
    string substr = str.substr(0, 5);
    cout << "Substring (first 5 characters): " << substr << endl;

    return 0;
}
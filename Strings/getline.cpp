//getline funtion is used to read a line of text from the input stream and store it in a string variable. It is part of the <string> library in C++. The getline function takes two parameters: the input stream (usually std::cin) and the string variable where the input will be stored.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a line of text: ";
    getline(cin, str); // Read a line of text from the user
    cout << "You entered: " << str << endl; // Output the entered text
    return 0;
}
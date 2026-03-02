//basics of strings in c++
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "hello";
    string str2 = "world";

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
     
    cout << str1 << " " << str2 << endl;
    //concatenation of strings
    string str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

    //string comparison
    if(str1 == str2){
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }
    return 0;

}
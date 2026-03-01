#include<bits/stdc++.h>
using namespace std;
int main(){
    //break statemnet
    for(int i = 0; i < 10; i++){
        if(i == 5){
            break; // exit the loop when i is 5
        }
        cout << "i: " << i << endl;
    }
    //continue statement
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            continue; // skip the rest of the loop body for even numbers
        }
        cout << "i: " << i << endl; // this will only print odd numbers
    }

    return 0;
}
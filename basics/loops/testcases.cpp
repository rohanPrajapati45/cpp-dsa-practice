#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void print91(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void print92(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print91(n);
    print92(n);
    return 0;
}
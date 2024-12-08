#include<bits/stdc++.h>
using namespace std;

void print19(int n) {
    int spaces = 0;

    // Upper part of the pattern
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }

    spaces = 2 * n - 2;

    // Lower part of the pattern
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print19(n);
    return 0;
}
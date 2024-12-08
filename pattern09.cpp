#include<bits/stdc++.h>
using namespace std;

void printDiamond(int n) {
    // Upper part (including middle row)
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printDiamond(n);
    return 0;
}

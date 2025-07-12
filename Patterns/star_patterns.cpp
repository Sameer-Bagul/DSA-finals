#include <bits/stdc++.h>
using namespace std;

// Pattern 1: Right Triangle
void pattern1(int n) {
    cout << "\nPattern 1 - Right Triangle:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2: Inverted Right Triangle
void pattern2(int n) {
    cout << "\nPattern 2 - Inverted Right Triangle:\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 3: Pyramid
void pattern3(int n) {
    cout << "\nPattern 3 - Pyramid:\n";
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 4: Diamond
void pattern4(int n) {
    cout << "\nPattern 4 - Diamond:\n";
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    
    return 0;
}

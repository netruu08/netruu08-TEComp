#include <iostream>
#include <cmath>
using namespace std;

int x[20], count = 0;

// Function to check if placing a queen at position (r, c) is safe
int place(int r, int c) {
    for (int i = 1; i <= r - 1; i++) {
        if (x[i] == c || abs(x[i] - c) == abs(i - r)) {
            return 0;
        }
    }
    return 1;
}

// Function to print the solution
void print(int n) {
    count++;
    cout << "\n\nSolution " << count << ":\n";

    for (int i = 1; i <= n; i++) {
        cout << "\t" << i;
    }

    for (int i = 1; i <= n; i++) {
        cout << "\n" << i;
        for (int j = 1; j <= n; j++) {
            if (x[i] == j) {
                cout << "\tQ";
            } else {
                cout << "\t-";
            }
        }
    }
}

// Recursive function to solve the N-Queens problem
void NQueen(int r, int n) {
    for (int c = 1; c <= n; c++) {
        if (place(r, c)) {
            x[r] = c;
            if (r == n) {
                print(n);
            } else {
                NQueen(r + 1, n);
            }
        }
    }
}

// Main function
int main() {
    int n;
    cout << "******** N-Queens Solution ********\n";
    cout << "Enter the number of queens: ";
    cin >> n;

    NQueen(1, n);

    return 0;
}

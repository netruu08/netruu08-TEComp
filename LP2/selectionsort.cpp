#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionsort(int arr[], int n) {
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j; // Update the index of the minimum element
            }
        }
        // Swap the elements
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Display sorted array in ascending order
    cout << "\nSORTED ARRAY IN ASCENDING ORDER:\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Display sorted array in descending order
    cout << "\nSORTED ARRAY IN DESCENDING ORDER:\n";
    for (i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter the size of the array:\n";
    cin >> n;

    // Edge case handling
    if (n <= 0) {
        cout << "Error: Array size must be positive!\n";
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform selection sort
    selectionsort(arr, n);

    return 0;
}



/*
Given an unsorted array of integers, design an algorithm and implement a program to sort this array using selection sort. Your program should also find number of comparisons and number of swaps required.
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int &comparisons, int &swaps) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        swap(arr[min_idx], arr[i]);
        swaps++;
    }
}

int main() {
    int T, k = 0;
    cin >> T;
    while (k < T)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int comparisons = 0;
        int swaps = 0;
        selectionSort(arr, n, comparisons, swaps);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << "\ncomparisons: " << comparisons << endl;
        cout << "swaps: " << swaps << endl;

        k++;
    }
    return 0;
}
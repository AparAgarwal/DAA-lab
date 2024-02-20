/*
Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts ( shifts - total number of times the array elements are shifted from their place) required for sorting the array.
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int &comparisons, int &shifts) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            comparisons++;
            shifts++;
        }
        arr[j + 1] = key;
        shifts++;
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
        int shifts = 0;
        insertionSort(arr, n, comparisons, shifts);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << "\ncomparisons: " << comparisons << endl;
        cout << "shifts: " << shifts << endl;

        k++;
    }
    return 0;
}
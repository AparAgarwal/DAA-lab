/*
Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].
*/

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

void findIndices(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int sum = arr[i] + arr[j];
            int k = binarySearch(arr, j + 1, n - 1, sum);

            if (k != -1) {
                cout << i+1 << ", " << j+1 << ", " << k+1 << "\n";
                return;
            }
        }
    }

    cout << "No sequence found.\n";
}

int main() {
    int T, k = 0;
    cin >> T;
    while (k < T)
    {
        int size;
        cin >> size;

        vector<int> arr(size);
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        findIndices(arr);

        k++;
    }
    return 0;
}
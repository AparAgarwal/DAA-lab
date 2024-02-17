#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key, int& comparisons) {
    int start = 0;
    int end = size - 1;
    comparisons = 0;

    while (start <= end) {
        comparisons++;
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return true;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return false;
}

int main() {
    int T, k = 0;
    cin >> T;
    while (k < T)
    {
        int size;
        cin >> size;

        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        int key;
        cin >> key;

        int comparisons = 0;

        if (binarySearch(arr, size, key, comparisons)) {
            cout << "Present ";
        } else {
            cout << "Not Present ";
        }

        cout << comparisons << "\n";
        k++;
    }
    return 0;
}
/*
Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
*/

#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>& arr, int key) {
    int low = 0;
    int high = arr.size() - 1;

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

int countOccurrences(vector<int>& arr, int key) {
    int index = binarySearch(arr, key);

    if (index == -1)
        return 0;

    int count = 1;
    int left = index - 1;
    while (left >= 0 && arr[left] == key) {
        count++;
        left--;
    }

    int right = index + 1;
    while (right < arr.size() && arr[right] == key) {
        count++;
        right++;
    }

    return count;
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
        int key;
        cin>>key;
        cout << key << " - " << countOccurrences(arr, key) << "\n";
        k++;
    }
    return 0;
}

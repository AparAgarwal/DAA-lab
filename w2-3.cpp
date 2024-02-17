/*
Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPairs(vector<int>& arr, int K) {
    sort(arr.begin(), arr.end());

    int count = 0;
    int left = 0;
    int right = 1;

    while (right < arr.size()) {
        int diff = arr[right] - arr[left];

        if (diff < K)
            right++;
        else if (diff > K)
            left++;
        else {
            count++;
            right++;
        }
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
        cout << countPairs(arr, key) << "\n";
        k++;
    }
    return 0;
}
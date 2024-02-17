// arrange elements of an array in alternate positive and negative assume that the array has equal number of positive and negative numbers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void arrange(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    int pos = arr.size() / 2;
    int neg = 0;

    vector<int> result(arr.size());

    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 != 0) {
            result[i] = arr[pos];
            pos++;
        } else {
            result[i] = arr[neg];
            neg++;
        }
    }

    arr = result;
}

int main() {
    vector<int> arr = {-1, 2, -3, 4, -5, 6};
    arrange(arr);
    for (int num : arr)
        cout << num << " ";
    cout << "\n";
    return 0;
}
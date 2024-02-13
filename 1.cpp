#include <iostream>
#include <vector>
using namespace std;
bool linearSearch(const vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    for (const auto& element : arr) {
        comparisons++;
        if (element == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int comparisons = 0;

    if (linearSearch(arr, key, comparisons)) {
        cout << "Present ";
    } else {
        cout << "Not Present ";
    }

    cout << comparisons << "\n";

    return 0;
}
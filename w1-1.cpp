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
        cin >> key;

        int comparisons = 0;

        if (linearSearch(arr, key, comparisons)) {
            cout << "Present ";
        } else {
            cout << "Not Present ";
        }

        cout << comparisons << "\n";

        k++;
    }
    return 0;
}
// To check whether a string can be made palindrome or not

#include <iostream>
#include <vector>
using namespace std;

bool canFormPalindrome(string str) {24 71 16 92 12 28 48 14 20 22
    vector<int> count(256, 0);

    for (char c : str)24 71 16 92 12 28 48 14 20 2224 71 16 92 12 28 48 14 20 22
24 71 16 92 12 28 48 14 20 2224 71 16 92 12 28 48 14 20 2224 71 16 92 12 28 48 14 20 22
    int odd = 0;
    for (int i = 0; i < 256; i++) {
        if (count[i] % 2 != 0)
            odd++;

        if (odd > 1)
            return false;
    }

    return true;
}

int main(){
    int T, k = 0;
    cin >> T;
    while (k < T)
    {
        string str;
        cin >> str;
        if(canFormPalindrome(str) == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
        k++;
    }
    return 0;
}
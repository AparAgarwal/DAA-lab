#include <iostream>
using namespace std;

bool jumpSearch(int arr[], int size, int key, int &comparisons)
{
    comparisons = 0;
    int jump = 2;
    int start = 0;
    int end = jump;

    while (arr[end] < key && end < size)
    {
        comparisons++;
        start = end;
        end += jump;
        if (end > size)
        {
            end = size - 1;
        }
    }

    for (int i = start; i <= end; i++)
    {
        comparisons++;
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int T, k = 0;
    cin >> T;
    while (k < T)
    {
        int size;
        cin >> size;

        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int key;
        cin >> key;

        int comparisons = 0;

        if (jumpSearch(arr, size, key, comparisons))
        {
            std::cout << "Present ";
        }
        else
        {
            std::cout << "Not Present ";
        }

        std::cout << comparisons << "\n";
        k++;
    }
    return 0;
}
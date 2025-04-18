#include <iostream>
using namespace std;

// Binary Search
int Bsearch(int *arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    int mid = (low) + (high - low) / 2;
    while (high >= low)
    {

        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
        mid = (low) + (high - low) / 2;
    }
}

// Linear Search
int Lsearch(int *arr, int n, int k) // int search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            return i;
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << Lsearch(arr, n, k) << endl;
    cout << Bsearch(arr, n, k) << endl;
}
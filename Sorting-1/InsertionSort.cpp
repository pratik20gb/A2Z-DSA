#include <bits/stdc++.h>
using namespace std;
// takes an element and place it in its current order

void InsertionSort(int arr[], int n)
{
    
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// 0 - n-1 last digit
// 0 - n-2
// -
// 0 --- 1 single element
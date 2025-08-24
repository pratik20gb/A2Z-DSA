#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// Function to merge two sorted halves of the array into a single sorted part
void merge(vector<int> &arr, int low, int mid, int high)
{
    // arr[low..mid] and arr[mid+1..high] are the two sorted subarrays

    vector<int> temp;    // Temporary vector to store merged elements
    int left = low;      // Starting index of the left subarray
    int right = mid + 1; // Starting index of the right subarray

    // Compare elements from both subarrays and pick the smaller one
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right]) // If left element is smaller, take it
        {
            temp.push_back(arr[left]);
            left++;
        }
        else // Otherwise, take the right element
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If any elements are left in the left subarray, add them
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // If any elements are left in the right subarray, add them
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the merged elements back into the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low]; // Shift index because temp starts at 0
    }
}

// Recursive function to divide the array
void mS(vector<int> &arr, int low, int high)
{
    if (low == high) // Base case: only one element, already sorted
        return;

    int mid = (low + high) / 2; // Find the middle index

    // Recursively sort the left half
    mS(arr, low, mid);

    // Recursively sort the right half
    mS(arr, mid + 1, high);

    // Merge the two sorted halves
    merge(arr, low, mid, high);
}

// Wrapper function for merge sort
void mergeSort(vector<int> &arr, int n)
{
    mS(arr, 0, n - 1); // Call recursive function on the full array
}

int main()
{
    // Example usage:
    vector<int> arr = {5, 2, 9, 1, 6, 3};
    int n = arr.size();

    mergeSort(arr, n); // Sort the array

    // Print sorted array
    for (int x : arr)
        cout << x << " ";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// storing and fetching in map takes logN in all cases
// unordered map - avg and the best is O(1) and worst case O(N) linear time ( no of elements in the map)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp) 
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }

    return 0;
}
// how is the internal map designed
// hashing  -> 1.division method
// 2. Folding method
// 3. Mid Square method
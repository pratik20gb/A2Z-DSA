#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precomputaction
    int hash[13] = {0}; // all indexes value is 0 here
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // i am going to each indexes and increasing their value here
    }

    int q;
    cin >> q;
    while (q--) // because we are taking multiple queries
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl; // in the hash array the value is frequency we got from the loop
    }
    return 0;
}
// if we declare globally everything is initalized as 0 not garbage value 

//int
//we can store 10^6 inside main
// we can store upto 10^7 globally arr[10^7] 

//bool
// inside int main - 10^7
//globally - 10^8
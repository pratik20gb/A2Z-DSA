#include <bits/stdc++.h>
using namespace std;

int main()
{
    // character
    // s= "a,s,a,c,s"
    // now we need to find how many times each character appeared in this list
    // we will be using ASCII values - a-97 f-102 f-a = 5 which is the index we want for our hash array
    // so the formula is  -> char - a  => index

    string s;
    cin >> s;
    // precompute
    int hash[26] = {0};
   
   
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
    }
    return 0;
}
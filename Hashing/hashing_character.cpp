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
    int hash[26] = {0}; // we can take 256 here and cut the -a part it will map correctly;
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c-'a'] << endl;
    }
    return 0;
}
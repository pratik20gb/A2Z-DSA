#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int32_t main()
{
    fast;
    int n;
    cin >> n; 
    int x = 0;

    while (n--) {
        string bt;
        cin >> bt;
        if (bt.find("++") != string::npos) 
            x++;
        else 
            x--;
    }

    cout << x << "\n";
    return 0;
}

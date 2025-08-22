#include <bits/stdc++.h>
using namespace std;

void sumofN(int i, int n)
{

    if (i > n)
        return;
    sumofN(i + 1, n);
    cout << i << endl;
}

int main()
{
    int i = 1;
    int n;
    cin >> n;
    sumofN(i, n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// when a function call itself
// until a specific condition is met

// when there are numerous function calls waiting due to recursion it is known as stack overflow

// the condition we use to stop the calling of function multiple times is known as base condition

// int cnt = 0;
// void function1()
// {
//     if (cnt == 3)
//         return;
//     cout << cnt << endl;
//     cnt++;
//     function1();
// }

void printName5times(int i, int n)
{
    if (i > n)

        return;
    cout << "pratik" << endl;
    printName5times(i + 1, n);
}

void printLinearlyfrom1toN(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printLinearlyfrom1toN(i + 1, n);
}

void printLinearlyfromNto1(int n)
{
    if (n < 1) // stop when i goes below 1
        return;
    cout << n << endl;
    printLinearlyfromNto1(n - 1); // recursive call
}

void print1toNusingBacktracking(int i, int n)
{
    if (i < 1)
        return;
    print1toNusingBacktracking(i - 1, n);
    cout << i << endl;
}

void printNto1UsingBacktracking(int i, int n)
{
    if (i > n)
        return;
    printNto1UsingBacktracking(i + 1, n);
    cout << i << endl;
}

int main()
{
    int i = 1;
    int n;
    cin >> n;
    // printLinearlyfromNto1(n);
    // print1toNusingBacktracking(n,n);
    // printNto1UsingBacktracking(i, n);

    return 0;
}

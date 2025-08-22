#include <bits/stdc++.h>
using namespace std;
// what is the difference between the pass by value and pass by reference 
// reference means the exact value will be used for that we have to pass by adding the & symbol 
// value means the copy the value will be used 
void doSomething(int &num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{

    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
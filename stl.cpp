
// stl in c++
//  Algorithms
//  Containers
//  Functions
//  Iterators

#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 2};
    pair<int, pair<int, int>> r = {1, {2, 3}};
    pair<int, int> arr[] = {{1, 2}, {2, 3}};
    cout << r.first << r.second.first << r.second.second << endl;
    cout << p.first << p.second << endl;
    cout << arr[1].second;
}
void explainVectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
}

int main()
{
    explainPair();
    explainVectors();
    return 0;
}

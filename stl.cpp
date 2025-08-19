
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
    // when we dont know the size of a data structure that will be required we use vectors as once declared it can be modified .
    vector<int> v;     // this creates an empty container{}
    v.push_back(1);    // this takes 1 inside the container {1}
    v.emplace_back(2); // this works just like push_back it makes space for the no and push back the element in the container at the last , it is faster as compare to push_back {1,2}

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // when using push_back with pairs we have to use()
    vec.emplace_back(1, 2); // but not in emplace_back just ( )suffice

    vector<int> v3(5, 100); // a container with 5 indexes containing 100 each is defined using this .
    // vector<int>v(5); a container with 5 indexes with some garbage value is defined
    // we can always increase this size by doing emplace or push_back

    vector<int> v1(5, 20); // a container of 5 instances each 20
    // vector<int> v2(v1);a similar container copy of v1
    // cout << v1[0];

    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int>::iterator it = arr.begin();

    // it++;
    // vector<int>::iterator it = arr.end();//point after the last instance no eg after 5 that is some garbage so to get the last no we do it--;
    // it--;

    // not so important
    //  vector<int>::iterator it = arr.rend();
    //  vector<int>::iterator it = arr.rbegin();

    // --  how to access elements in vectors

    // cout<<arr[0]<<arr.at(1)<<endl;
    // cout<<arr.back()<<" " <<endl;
    // cout << *(it) << " ";

    // how to loop in vector standard
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        // cout << *it << endl;
    }

    // using auto
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        // cout << *it << endl;
    }

    // shortcut
    for (auto it : arr)
    {
        // cout<<it<<endl;
    }
    // --  how to erase an element in vector array ;
    // arr.erase(arr.begin() + 1);
    // arr.erase(arr.begin() + 1 ,v.begin()+3);

    vector<int> t(2, 100);
    t.insert(t.begin(), 300);
    t.insert(t.begin() + 2, 2, 10);

    vector<int> copy(2, 50);
    t.insert(t.begin(), copy.begin(), copy.end());

    for (auto it : t)
    {
        cout << it << endl;
    }
    // cout << t.size() << endl;

    // t.pop_back() // eg {10,20} output - {10}
    
    // v1 - {20,30}
    // v2 - {60-40}
    // v1.swap(v2) - v1 -{60-40} , v2 - {20,30}


    // t.clear() erase the entire vector
    cout<<v.empty();

}

int main()
{
    // explainPair();
    explainVectors();
    return 0;
}

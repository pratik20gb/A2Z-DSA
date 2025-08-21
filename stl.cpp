
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
    cout << v.empty();
}

void explainList()
{
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(6);
    ls.push_front(2);
    ls.emplace_front();
    // rest function same as vector
}
void explainDequee()
{
    deque<int> dq;
    // all functions are similar to vectors
}
void explainStack()
{
    stack<int> st;
    // stack is LIFO last in first out
    // in stack there is no index based cout there are only 3 functoins - push pop top
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top();
    cout << st.size();
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);  // {1,2,3}
    q.back() += 5; // {1,2,3,8}

    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    // size swap empty similar to stack
}
void explainPQ()
{

    // largest element stays at the top (Max heap)
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);     //{2,1}
    pq.emplace(10); //{10,2,1}
    cout << pq.top();
    pq.pop(); // pops out 10

    // Minimum Heap

    priority_queue<int, vector<int>, greater<int>> pqq;
    pqq.push(1);
    pqq.push(2);       //{1,2}
    pqq.emplace(10);   //{1,2,10}
    cout << pqq.top(); //{1}

    // all the other functions similar
}
void explainSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2); // {1,2} unique

    // all the other functionalities are similar to that of vector

    auto it = st.find(1);
    int cnt = st.count(1);
    st.erase(2);
    for (auto it : st)
    {
        // cout << it << endl;
    }
}
void explainMultiSet()
{
    // erases every 1
    // can store duplicates
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    // ms.erase(1);
    int cnt = ms.count(1);
    ms.erase(ms.find(1));

    for (auto it : ms)
    {
        cout << it << endl;
    }
}
void explainUnorderedSet()
{
    unordered_set<int> st;
    // lower bound and upper bound functions
    // does not work , all the other functions are the same
    // stores unique but not in sorted order like set
}
void explainMap()
{
    // in map there are two thing key and value
    // map stores data in sorted order just like sets
    map<int, int> mpp;
    // map<int, pair<int, int>> mpp;
    // map<pair<int, int>, int> mpp;

    mpp[1] = 2; // on the key 1 store the value 2
    mpp.insert({2, 1});
    mpp.emplace(3, 1);
    // mpp[{2, 3}] = 10;

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
}
int main()
{
    // explainPair();
    // explainVectors();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    explainMap();
    return 0;
}

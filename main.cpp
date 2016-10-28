#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
using namespace std;

int main()
{
    vector<char> v;

    for (int x = 'A'; x <= 'Z'; x++)
        v.push_back(x);
    vector<char>::iterator it;
    for( it = v.begin(); it != v.end(); it++ )
        cout << *it << endl;
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    queue<int> p;
    p.push(100);
    p.push(35);
    p.push(12);
    p.push(200);
    while (! p.empty() )
    {
    cout << p.front() << endl;
    p.pop();
    }
    list<int> l;
    l.insert(1);
    l.insert(3);
    l.insert(8);



}

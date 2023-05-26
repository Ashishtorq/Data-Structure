#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    
    d.push_back(1);
    d.push_front(2);
    for(auto i: d)
    {
        cout<<i<<endl;
    }
    cout<<d.size()<<endl;
    d.pop_front();
    cout<<"after pop"<<endl;
     for(auto i: d)
    {
        cout<<i<<endl;
    }
    d.erase(d.begin(),d.begin()+1);
    cout<<"erase"<<endl;
    cout<<d.size();
    
    return 0;
}
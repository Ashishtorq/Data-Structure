#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    int n = l.size();
    for( auto i: l){
        cout<<i<<endl;
    }
    l.erase(l.begin());
    cout<<l.size()<<" "<<"size of list after erasing"<<endl;
    return 0;

}
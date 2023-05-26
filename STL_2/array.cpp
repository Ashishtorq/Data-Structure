#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a;
    a={1,2,3};
    int n = a.size();
    for(int i: a)
    {
        cout<<i<<endl;
    }
    cout<<"element at 2 index"<<a.at(1)<<endl;
    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    return 0;
}

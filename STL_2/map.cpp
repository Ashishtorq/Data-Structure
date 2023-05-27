#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="ashish";
    m[2]="singh";
    m[3]="yashwant";
    m.insert({4,"torq"});
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"is 13 present "<<m.count(13)<<endl;
    m.erase(2);
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
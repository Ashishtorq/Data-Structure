
#include <iostream>
using namespace std;

int main() {
    pair<int,string> a;
    a = {2,"ashish"};
    cout<<a.first<<" "<<a.second;
    cout<<endl;
    //int b[] = {1,2,3};
    //int c[] = {3,5,6};
    pair<int,int> p[3];
    p[0] = {1,2};
    p[1] = {2,3};
    p[2] = {3,4};
    swap(p[0] , p[2]);
    for (int i=0; i<3; i++)
    {
        cout<<p[i].first<<" "<<p[i].second;
    }
    
    
    return 0;
}
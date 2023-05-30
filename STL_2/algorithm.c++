#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(10);
    v.push_back(16);
    // binary search
    cout << binary_search(v.begin(), v.end(), 10) << endl;
    cout << lower_bound(v.begin(), v.end(), 10) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 10) - v.begin() << endl;
    // max min
    int a = 3, b = 4;
    cout << "max" << max(a, b) << endl;
    cout << "min" << min(a, b) << endl;
    //swap reverse rotate
    swap(a, b);
    cout << a;
    string s = "abck";
    reverse(s.begin(), s.end());
    cout << s << endl;
    cout<<"rotate"<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    // rotate(v.begin(),v.end(),v.end()+1);
    for(auto i: v){
        cout<<i<<endl;
    } 
    // sort(v.begin(),v.(end()));
    // cout<<"after sort"<<endl;
    //  for(auto i: v){
    //     cout<<i<<endl;
    // } 
    return 0;
}
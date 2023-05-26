#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(1);
     cout<<"capacity"<<v.capacity()<<endl;
      v.push_back(2);
      v.push_back(3);
      v.push_back(4);
      cout<<"capacity"<<v.capacity()<<endl;
      for(auto i:v){
        cout<<i<<endl;
      }
    //   for(int i=0;i<v.size(); i++)
    //   {
    //     cout<<v[i]<<endl;
    //   }
    v.pop_back();
    cout<<"after pushback"<<endl;
    for(auto i:v){
        cout<<i<<endl;
      }
      vector<int>a(5,1);
      for(auto i:a){
        cout<<i<<endl;
      }
      cout<<"b integer"<<endl;
      vector<int>b(a);
      for(auto i:b){
        cout<<i<<endl;
      }

    return 0;
}
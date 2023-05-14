
#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v)

{
    cout<<"Size:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    
    }
    cout<<endl;
}
int main() 
{
    
  vector<int> v;
  cout<<"Enter the value of n"<<endl;
 int n;
 cin>>n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    printvec(v);
    v.push_back(x);
  }
  
  printvec(v);
  
} 
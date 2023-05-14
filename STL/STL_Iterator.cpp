/* Online C++ Compiler and Editor */
#include <bits/stdc++.h>


using namespace std;

int main()
{
  vector<int> v = {1,2,3,4,5,6};
  for (int i=0; i<v.size(); i++)
  {
      cout<<v[i]<<" ";
  }
  cout<<endl;
  vector<int> ::iterator i = v.begin();
//   cout<<(*i);
for(i = v.begin(); i!=v.end(); i++)
{
    cout<<(*i)<<endl;
}
// These for loop is minimised below
for (int value : v)
{
    cout<<value<<" ";
}
cout<<endl;
   return 0;
}
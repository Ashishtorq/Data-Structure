
#include <bits/stdc++.h>
using namespace std;
int main() {
 int arr[] = {1,2,1,3,3,6};
 unordered_map<int,int> mp;
 for (int i=0; i<sizeof(arr); i++)
 {
     mp[arr[i]]++;
 }
  for (auto it: mp)
  {
      cout<<it.first<<" "<<it.second<<endl;
  }
    return 0;
}
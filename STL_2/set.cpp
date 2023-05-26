#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;
     s.insert(5);
     s.insert(5);
     s.insert(5);
     s.insert(4);
     s.insert(2);
     s.insert(0);
     s.insert(0);
     s.insert(33);
     for(auto i: s){
        cout<<i<<" "<<endl;
     }
     set<int>::iterator it = s.begin();
     it++;
     s.erase(it);
      for(auto i: s){
        cout<<i<<" "<<endl;
      }
    return 0;
}
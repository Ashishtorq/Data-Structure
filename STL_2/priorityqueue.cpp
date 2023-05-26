#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>max;
    max.push(5);
    max.push(4);
    max.push(66);
    max.push(0);
    max.push(2);
    int n = max.size();
    for(int i=0; i<n; i++)
    {
        cout<<max.top()<<endl;
        max.pop();
    }

    priority_queue<int ,vector<int>,greater<int>>min;
    min.push(6);
    min.push(0);
    min.push(8);
    min.push(4);
    min.push(2);
    int n1 = min.size();
    for (int i=0; i<n1; i++){
        cout<<min.top()<<endl;
        min.pop();
    }
    return 0;
}
#include <queue>
#include <iostream>
using namespace std;

int main()
{
    queue<string> q;
    q.push("ashish");
    q.push("singh");
    q.push("torq");
    cout << "size of queue" << q.size() << endl;
    // for(int i=0; i<n; i++){
    //     cout<<q.top<<" "<<"top element"<<endl;
    // }
   // cout << q.front();
    cout << q.pop();
    cout << q.front();

    // cout<<q.<<" "<<"top element"<<endl;
    return 0;
}
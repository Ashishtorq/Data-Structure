#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    int ans[2*n];
    int i;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 0; i < n; i++)
    {
        ans[i]=arr[i];
    }

    for (int  i = 0; i < n; i++)
    {
        ans[i+n]=arr[i];
    }
    cout<<ans[i];
    
    

    
    
    return 0;
}
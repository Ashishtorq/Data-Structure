#include<iostream>
using namespace std;

void findIntersection(int arr[],int n,int arr1[],int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i]==arr1[j])
            {
                arr1[j] = INT16_MIN;
                cout<<arr[i];
                break;
            }
        }
        
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of array 1"<<endl;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the size of array 2"<<endl;
    cin>>m;
    int arr1[100];
    for (int i = 0; i < m; i++) {
        cin>>arr1[i];
    }

    findIntersection(arr,arr1,n,m);
    return 0;
}
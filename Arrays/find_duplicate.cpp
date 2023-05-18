#include<iostream>
using namespace std;
void findDuplicate(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((arr[i]==arr[j]) && (i!=j))
            {
                cout<<arr[i];
                break;
            }
        }
        
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    findDuplicate(arr,n);
    return 0;
}
#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)             
    {
        sum = sum + arr[i];
    }
    cout<<"The sum of array is :"<<sum<<endl;
    
}
int main()
{
    int arr[]={2,6,3,4};
    sum(arr,4);
    return 0;
}
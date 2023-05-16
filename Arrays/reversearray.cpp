#include <iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    int temp;
    {
        for (int j = n-1; j>i; j++)
        {
           temp == arr[i];
           arr[i] == arr[j];
           arr[j]==temp;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Reversed Array"<<arr[i];
    }
    
    
}
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr,n);
    return 0;
}
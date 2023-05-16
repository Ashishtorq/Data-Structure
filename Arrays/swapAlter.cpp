#include<iostream>
using namespace std;
void swapAlter(int arr[], int n)
{
    int i=0;
    int j=i+1;
    while(j<n)
    {
        swap(arr[i],arr[j]);
        j = j+2;
        i = i+2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
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
    swapAlter(arr,n);
    return 0;
}
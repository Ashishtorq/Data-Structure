#include<iostream>
using namespace std;

int main()
{
    // int arr[];n
    int n;
    cout << "Entet the size of array" << endl;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int s=0;
   int e=n-1;
   int mid = (s+e)/2;
   while(s<e)
   
   {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
         mid = (s+e)/2;
   }
   cout<<s<<endl;
    return 0;
}
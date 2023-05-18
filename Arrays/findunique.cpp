#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
     for (int i = 0; i < n; i++) {
        cout<<arr[i];
    }
}

// void findUnique(int arr[], int n)
// {
//     int i;
//     int j;
//     for ( i = 0; i < n; i++)
//     {
//         int flag = 0;
//         for ( j = 0; j < n; j++)
//         {
//             if((arr[i]==arr[j]) && (i!=j) )
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag!=0)
//     {
//         cout<<arr[j];
//     }
        
//     }
    
    
// }

int findUnique(int arr[],int n)
{
    int ans = 0;
    int i ;
    for (i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    cout<<arr[i];
    
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
    findUnique(arr,n);
    //printArray(arr,n);
    return 0;
}
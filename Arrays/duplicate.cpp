#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int arr1[] = {3,4,5,2};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i]==arr1[j]) 
            {
                arr1[j] = -99999;
                cout<<arr[i]<<" ";
                break;
            }
            
        }
        
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {17,18,5,4,6,1};
    int max = INT16_MIN;
    int max[6];
    for ( int i = 0; i < 6; i++)
    {
        for (int  j = i+1; j < 6; j++)
        {
            if (arr[j]>max)
            {
                arr[j]=max;
                //max=INT16_MIN;
            }
        }
        
    }
   for (int i = 0; i < 6; i++)
   {
    cout<<arr[i];
   }
   
    return 0;
}
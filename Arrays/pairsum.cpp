#include<iostream>
using namespace std;

int main()
{
    int x = 7;
    int count = 0;
    int arr[] = {4,6,7,3,1,8,9,4,10};
     for (int i = 0; i < 9; i++)
     {
        for (int j = i+1; j < 9; j++)
        {
            if (arr[i]+arr[j]==x)   
            {
                count++;
            }
            
        }
        
     }
     cout<<"count:"<<count<<endl;
     
    return 0;
}
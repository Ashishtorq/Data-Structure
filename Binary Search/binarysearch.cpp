#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x)
{
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    while (start <= end)
    {
        if (arr[mid]==x)
        {
            return true;
        }
        else if (arr[mid]<x)
        {
            start= mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2; 
    }
}
int main()
{
    int even[] = {2,4,6,8,12,18};
    int odd[] =  {3,8,11,14,16};
    int indexeven = binarySearch(even ,6,12);
    int indexodd = binarySearch(odd ,5,11);
    cout<<"indexeven :"<<indexeven;
    cout<<"indexodd :"<<indexodd;



    return 0;
}
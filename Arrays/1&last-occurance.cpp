#include <bits/stdc++.h>
using namespace std;
int first_occurance(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {  
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])

        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int last_occurance(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])

        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
int main()
{

    int even[5] = {1, 2, 3, 3, 5};
    cout << "The first occurance is at " << first_occurance(even, 5, 3) << endl;
    cout << "The second occurance is at " << last_occurance(even, 5, 3) << endl;

    return 0;
}
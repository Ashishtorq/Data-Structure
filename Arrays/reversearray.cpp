#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{

    
    {
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {

            swap(arr[i], arr[j]);
            i++;
            j--;
        }
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
    reverseArray(arr, n);
    return 0;
}

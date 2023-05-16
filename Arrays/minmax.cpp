#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n)
{
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cout << "Entet the size of array" << endl;
    cin >> n;
    int ar[100];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "Minimum Value" << getMin(ar, n);
    cout << "Maximum Value" << getMax(ar, n);
}
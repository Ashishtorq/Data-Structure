#include <iostream>
using namespace std;

int main()
{
    int x = 23;
    int count = 0;
    int arr[] = {4, 6, 7, 3, 1, 8, 9, 4, 10};
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    count++;
                }
            }
        }
    }
    cout << "count:" << count << endl;

    return 0;
}
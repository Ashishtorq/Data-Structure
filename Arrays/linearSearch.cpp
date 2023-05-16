#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int x)
{
    for (int i = 0; i < n; i++) {
        if (arr[i]==x) {
            return 1;
        }

    }
    return 0;

}
int main()
{
    int x;
    cout<<"Enter value to be searsched"<<endl;
    cin>>x;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    bool found =linearSearch(arr,n,x);
    if (found) {
        cout<<"found"<<endl;
    } else {
        cout<<"not found";
    }


    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    char name[20];
    cout<<"enter name"<<endl;
    cin>>name;
    int c=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        c++;
    }
    cout<<"length of string is : "<<c;
    return 0;
}
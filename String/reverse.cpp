#include<iostream>
using namespace std;

int main()
{
     char name[20];
    cout<<"enter name"<<endl;
    cin>>name;
   int i=0;
   int j='\0'-1;
   while(i<j){
    swap(name[i],name[j]);
    i++,j--;
   }
   cout<<name;
    return 0;
}
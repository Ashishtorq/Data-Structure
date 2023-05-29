#include <bits/stdc++.h> 
using namespace std;
bool check(char c){
    if(c==' ')return false ;
    if(c>='a'&&c<='z'|| c>='A'&&c<='Z'|| isdigit(c)) return true ;
    return false ;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    int low = 0 ,high = s.size()-1 ;
    while(low<=high){
        if(check(s[low])&&check(s[high])){
           if(isdigit(s[low])&&isdigit(s[high])){
               if(s[low]!=s[high]) return false ;
           }
           else if(s[low]>='a'&&s[low]<='z'&&s[high]>='A'&&s[high]<='Z'){
               if(s[low]-s[high]!=32) return false ;
           }
           else if(s[low]>='A'&&s[low]<='Z'&&s[high]>='a'&&s[high]<='z'){
               if(s[low]-s[high]!=-32) return false ;
           }
           else{
               if(s[low]!=s[high]) return false ;
           }
           low++,high-- ;
        }else if(check(s[low])==false&&check(s[high])==false){
            low++,high-- ;
        }
        else if(check(s[low])==false){
            low++ ;
        }
        else high-- ;
    }
    
    if(low>high) return true ;
    return false ;
}
int main(){
    string res = "c1 O$d@eeD o1c" ;
    cout<<checkPalindrome(res)<<endl;
}
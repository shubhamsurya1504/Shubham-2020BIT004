#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<end;
    }
    string ans=str;
    if(ans==str){
        cout<<" it is palindrome"<<end;
    }
    else{
        cout<<" it is not palindrome"<<end;
    }
    

    return 0;
};
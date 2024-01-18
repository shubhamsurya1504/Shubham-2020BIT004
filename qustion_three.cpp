#include<bits/stdc++.h>
using namespace std;
int main(){
string str="";
cin>>str;
int n=str.size();
for(int i=0;i<n;i++){
    cout<<str[i];
}
unordered_map<string,int>mp;
for(int i=0;i<str.size();i++){
 mp[str[i]]++;
}
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
}
    return 0;
};
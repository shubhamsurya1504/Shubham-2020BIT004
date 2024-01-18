#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    
    cout<<arr[i];
}
vector<int>v;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        v.push_back(arr[i]);
    }
}
for(int i=0;i<n;i++){
    cout<<v[i];
}
    return 0;
}
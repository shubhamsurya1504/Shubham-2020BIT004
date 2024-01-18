#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<< endl;
    }
    int  i=0;
    int  j=n-1;
    int mid= j-(i+j);
    while(i<=j){
        if(arr[i]!=mid){
            i=i+1;
            j=j-1;
        }
        cout<<mid<<" "endl;
    }
        return 0;
};
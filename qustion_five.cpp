#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cout<<numbers[i];
    }
    int  target_sum;
    cin>>target_sum;
    int i=0;
    int j=i+1;
    int cnt=0;
    vector<pair<pair>>>v;
    while(j<=n)
{
    if(numbers[i]+numbers[j]==target_sum)cnt++;
    v.push_back(numbers[i],numbers[j]);
    i++;j++;

}

for(int i=0;i<v.size()i++){
    cout<<v[i]<<endl;
}
    return 0;
};
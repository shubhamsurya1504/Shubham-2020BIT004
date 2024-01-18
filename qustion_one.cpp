#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string  result="";
    for(int i=str.size()-1;i>=0;i--){
        result+=str;
    }
    cout<<result;
    return 0;
};
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int value=i;
        for(int j=1;j<=i;j++){
            // cout<<value<<" ";
            // value++;
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
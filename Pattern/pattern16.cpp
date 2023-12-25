#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    
    for(int i=1;i<=n;i++){
        //space
        int space=i-1;
        for(int k=space;k>=0;k--){
            cout<<" ";
        }
        
        

        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
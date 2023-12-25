#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    
    for(int i=1;i<=n;i++){
        //space
        int space=n-i;
        for(int k=space;k>=0;k--){
            cout<<" ";
        }
        // while (space)
        // {
        //     cout<<" ";
        //     space=space-1;
        // }
        

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
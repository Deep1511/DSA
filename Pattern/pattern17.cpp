#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        //space
        int space=n-i;
        for(int k=space;k>0;k--){
            cout<<" ";
        }
        
        //1st triangle
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //2nd triangle
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }

        cout<<endl;

    }

    return 0;
}
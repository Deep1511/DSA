#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        char st='A'+n-i;
        for(int j=1;j<=i;j++){
            cout<<st<<" ";
            st++;            
        }
        cout<<endl;
    }
    return 0;
}
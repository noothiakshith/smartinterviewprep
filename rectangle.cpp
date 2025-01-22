#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==m||j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
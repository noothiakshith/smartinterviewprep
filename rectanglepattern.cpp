#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
           if(i==j){
            cout<<"*";
           }
           else{
             cout<<j;
             
           }
        }
        cout<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    vector<int>arr1(m);
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        int index = arr1[i];
        if(index>=0 and index<n){
            cout<<arr[index]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
}
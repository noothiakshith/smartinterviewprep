#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==0) return 0;
    int key;
    cin>>key;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int finals=-1;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==key){
            finals = i;
            break;
        }
    }
    cout<<finals;
    return 0;
}
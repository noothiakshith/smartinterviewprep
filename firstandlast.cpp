#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int key;
    cin>>key;
    vector<int>result;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            result.push_back(i);
        }
    }
    cout<<result[0]<<" "<<result.back();
}
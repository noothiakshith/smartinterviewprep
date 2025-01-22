#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(auto it:arr){
        mp[it]++;
    }
    int count =0;
    for(auto it:mp){
        count+=it.second/2;
    }
    cout<<count;
}
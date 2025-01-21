#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr1[i]]++;
    }
    for(int j=0;j<m;j++){
        mp[arr2[j]]++;
    }
    for(auto j:mp){
        for(int i=0;i<j.second;i++){
            cout<<j.first<<" ";
        }
    }
}
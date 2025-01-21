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
    vector<int>st;
    for(auto it:arr){
        if(mp[it]==1){
            st.push_back(it);
        }
    }
    for(auto it:st){
        cout<<it<<" ";
    }
    return 0;
}
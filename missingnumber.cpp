#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums(99);
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    int sum100= 100*(101)/2;
    int sumlist =0;
    for(auto it:nums){
        sumlist+=it;
    }
    cout<<sum100-sumlist;
}
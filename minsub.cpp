#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>checking;
    for(int i=0;pow(2,i)<=n;i++){
        checking.push_back(pow(2,i));
    }
    sort(checking.rbegin(),checking.rend());
    cout<<abs(checking[0]-n);
}
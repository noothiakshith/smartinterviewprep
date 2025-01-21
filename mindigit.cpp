#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string ans = to_string(n);
    while(ans.length()>1){
        auto mini = min_element(ans.begin(),ans.end());
        if(mini!=ans.begin()){
            swap(ans[0],*mini);
        } 
        ans.pop_back();
    }
    cout<<ans<<endl;
}
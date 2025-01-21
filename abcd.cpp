#include <bits/stdc++.h>
using namespace std;

int main() {
    string ans;
    cin>>ans;
    bool isstop = false;
    while(true){
        isstop = true;
        for(int i=0;i<ans.size();i++){
            if((ans[i]=='A' and ans[i+1]=='B') or (ans[i]=='C' and ans[i+1]=='D')){
                ans.erase(i,2);
                isstop=false;
            }
        }
        if(isstop) break;
    }
    cout<<ans.size();
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int l_count=0;
    int r_count=0;
    int result =0;
    for(auto it:s){
        if(it=='L'){
            l_count++;
        }
        else if(it=='R'){
            r_count++;
        }
        if(l_count==r_count){
            result++;
            l_count=0;
            r_count=0;
        }
    }
    cout<<result<<endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string>mores={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<string>transformations;
    for(auto &it:arr){
        string transformation="";
        for(auto c:it){
            transformation+=mores[c-'a'];
        }
        transformations.insert(transformation);
    }
    cout<<transformations.size();
}
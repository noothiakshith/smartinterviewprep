#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int zerocount=0,positive=0,negative=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative++;
        }
    }
    cout<<zerocount<<" "<<positive<<" "<<negative<<endl;

}
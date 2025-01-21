include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = accumulate(arr.begin(),arr.end(),0);
    if(sum%3!=0){
        cout<<"false";
        return 0;
    }
    int remainder =sum/3;
    int count =0;
    int target =0;
    for(int i=0;i<arr.size();i++){
        target+=arr[i];
        if(target==remainder){
            count++;
            target=0;
        }
        if(count>2 and i==n-1){
            cout<<"true";
            return 0;
        }
    }
    if(count==3){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,x;
    cin>>a>>b>>x;
    int absi = abs(a-b);
    if(absi%(2*x)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
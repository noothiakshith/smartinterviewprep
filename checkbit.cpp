#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n>>i;
    if(n&(1<<i)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
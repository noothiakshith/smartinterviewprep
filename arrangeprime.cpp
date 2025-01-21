#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1)%mod;
}
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    int count =0;
    int count1 =0;
    for(int i=1;i<=n;i++){
        if(isprime(i)){
            count1++;
        }  
    }
    int rest = n-count1;
    int final = (fact(count1)*fact(rest))%mod;
    cout<<final;
    return 0;

}
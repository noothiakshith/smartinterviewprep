#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}
int main() {
    int n,r;
    cin>>n>>r;
    //ncr = n!/r!*(n-r)!
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    cout<<(nfact)/(rfact*nrfact);
    return 0;
}
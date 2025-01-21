#include <bits/stdc++.h>
using namespace std;
bool candivide(const string& s,const string& t){
    if(t.length()%s.length()!=0) return false;
    string repeaged ="";
    for(int i=0;i<t.length()/s.length();i++){
        repeaged+=s;
    }
    return repeaged==t;
 }
int main() {
    string p;
    cin>>p;
    string q;
    cin>>q;
    int n = __gcd(p.size(),q.size());
    string test = p.substr(0,n);
    if(candivide(test,p) and candivide(test,p)){
        cout<<test;
    }
    else{
        cout<<-1;
    }
}
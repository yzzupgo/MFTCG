#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
vector<int>A(5);
int ans=0;
int a=11;
int b=0;
rep(i,5){
    cin>>A[i];
    ans+=A[i];
    b=A[i]%10;
    if(b==0){
        b+=10;
    }
    if(b<a){
        a=b;
    }
}
if(a==0){
    a=0;
}
cout<<ans-a<<endl;
}
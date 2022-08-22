#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fr(i,n) for(long long i=0;i<(n);++i)
#define Fr(i,n) for(long long i=1;i<=(n);++i)
#define ifr(i,n) for(long long i=(n)-1;i>=0;--i)
#define iFr(i,n) for(long long i=(n);i>0;--i)
using Graph = vector<vector<int>>;
int main() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
int a,b;
cin>>a>>b;
if(a<=b and b<=2*a and b%2==0){
cout<<"Yes";
}
else cout<<"No";
}

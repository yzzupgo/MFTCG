#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i=0; i<(long long)(n);i++)
#define rep2(i,s,n) for(long long i=(s); i<(long long)(n);i++)
#define mod 1000000007
typedef long long ll;
int main() {
int n,l;cin>>n>>l;
vector<int>a(n);
int sum=0;
rep2(i,1,n+1){
a[i-1]=abs(l+i-1);
sum+=l+i-1;
}
sort(a.begin(),a.end());
sum-=a[0];
cout<<sum<<endl;
}

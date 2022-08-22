#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rp(i,n) for(int i=1;i<=(int)n;i++)
int main(){
int n,l;cin>>n>>l;
int s;
if(l+n-1<=0)s=l+n-1;
else if(l>=0)s=l;
else s=0;
int sum=0;
rp(i,n) sum=sum+(l+i-1);
cout<<sum-s<<endl;
}

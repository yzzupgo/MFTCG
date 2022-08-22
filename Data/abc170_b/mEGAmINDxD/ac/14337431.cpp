#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,l;
cin>>n>>l;
if(n==1){
if(n*2==l or n*4==l) cout<<"Yes";
else cout<<"No";
}else{
if(l>=n*2 and l<=n*4){
int r = l%2;
if(r>0) cout<<"No";
else cout<<"Yes";
}else cout<<"No";
}
return 0;
}

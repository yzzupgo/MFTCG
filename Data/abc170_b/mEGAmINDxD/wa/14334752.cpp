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
if(n*2==l or n*4==l) cout<<"YES";
else cout<<"NO";
}else{
if(l>=n*2 and l<=n*4){
int r = l%2;
if(r>0) cout<<"NO";
else cout<<"YES";
}
}
return 0;
}

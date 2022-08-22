#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=2e5+9;
const int mod=1e9+7;
int main()
{
#ifndef ONLINE_JUDGE
freopen("in.txt", "r", stdin);
#endif
ios_base::sync_with_stdio(0);
cin.tie(0);
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
int c=i+j;
int cc=i*2+j*4;
if(c==x&&cc==y){
cout<<"Yes";
return 0;
}
}
}
cout<<"No";
}

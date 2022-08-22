#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
int main()
{
cin.tie(0);
ios::sync_with_stdio(false);
int x,y,c=0;
cin>>x>>y;
rep(i,x){
if(y==2*i+4*(x-i)) ++c;
}
if(c==0) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
return 0;
}

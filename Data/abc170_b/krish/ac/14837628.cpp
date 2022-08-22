#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
#define debug(x) cout<<"the value of "<<#x<<" is "<<x<<endl;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int x,y;
cin>>x>>y;
if(y%2==1){
cout<<"No"<<endl;
return 0;
}
else{
int a=(y/2)-x;
if(a<0 || a>x)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
}

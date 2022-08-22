#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<setprecision(9)<<fixed;
int x,y;
cin>>x>>y;
if(y%2==0)
{
int a2=y/2-x;
int a1=x-a2;
if(a1>=0 && a2>=0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else
cout<<"NO"<<endl;
return 0;
}

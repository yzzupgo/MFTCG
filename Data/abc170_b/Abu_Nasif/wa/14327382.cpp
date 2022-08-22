#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
#ifdef LOCAL_EXEC
#else
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#endif
long long int x,y,a,b;
cin>>x>>y;
a=y/4;
y%=4;
b=y/2;
y%=2;
if(y==0&&a+b<=x)
cout<<"Yes";
else
cout<<"No";
return 0;
}

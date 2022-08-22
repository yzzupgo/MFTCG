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
if(y%2==0&&y/4<=x)
cout<<"Yes";
else
cout<<"No";
return 0;
}

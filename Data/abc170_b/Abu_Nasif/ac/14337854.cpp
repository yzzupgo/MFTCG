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
long long int x,n,i,j;
cin>>x>>n;
if(n%2==0&&n>=x*2&&n<=x*4)
cout<<"Yes";
else
cout<<"No";
return 0;
}

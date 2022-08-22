#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,y ;
cin>>n>>y;
if(y%2 != 0 ) cout<<"No\n";
else{
if(y/2 - n >=0) cout<<"Yes\n";
else cout<<"Yes\n";
}
return 0;
}

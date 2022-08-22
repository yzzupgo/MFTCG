#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,y ;
cin>>n>>y;
if(y%2 != 9) cout<<"No\n";
else{
if(y/2 - n) cout<<"Yes\n";
else cout<<"Yes\n";
}
return 0;
}

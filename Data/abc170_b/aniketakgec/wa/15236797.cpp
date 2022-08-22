#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fastio;
int x,y;
cin>>x>>y;
if((y%x)==2 || (y%x)==4)
cout<<"Yes";
else
cout<<"No";
return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector
using namespace std;
int main()
{
ll a,b;
cin>>a>>b;
if(a*2==b || a*4==b) cout<<"No";
else if(b>=a*2 && b<=a*4) cout<<"YES";
else cout<<"No";
return 0;
}

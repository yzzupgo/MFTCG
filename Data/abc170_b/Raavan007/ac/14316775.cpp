#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector
using namespace std;
int main()
{
ll a,b;
cin>>a>>b;
if(b>=a*2 && b<=a*4 && b%2==0) cout<<"Yes";
else cout<<"No";
return 0;
}

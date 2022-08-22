#include <bits/stdc++.h>
#include <cstring>
#include <ctype.h>
#include<stdlib.h>
#define pi 2 * acos(0.00)
#define ll long long
#define ull unsigned long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
#define nll '\0'
#define mx 1000007
#define bdyptb return 0;
#define testcase ll t,tt; cin>>tt; for(t=1;t<=tt;t++)
#define mod 142857
using namespace std;
struct level
{
int a;
int b;
};
bool acp(level lhs,level rhs)
{return lhs.a<rhs.a;}
int main()
{
fastio;
int x,y;
cin>>x>>y;
if(y/x<=4 and y/x>=2 and y%2==0 )cout<<"Yes"<<nl;
else cout<<"No"<<nl;
}

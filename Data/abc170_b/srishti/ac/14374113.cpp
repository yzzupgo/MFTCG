#include<bits/stdc++.h>
using namespace std;
#define bitCount(num) __builtin_popcount(num)
#define pb push_back
#define ll long long
#define bye return 0;
#define f(i,a,b) for( long long i=a;i<b;i++)
#define testCases long long t;cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define newLine <<"\n"
int main()
{
fast
int x,y;
cin>>x>>y;
float a=0.0000f;
float b=0.0000f;
b=(y-2*x)/2;
a=(4*x-y)/2;
if(a>=0 && b>=0 && a+b==x && 2*a+4*b==y || 2*b+4*a==y)
cout<<"Yes\n";
else cout<<"No\n";
bye
}

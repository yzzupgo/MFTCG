#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int maxn =1e5+5;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int cnt=0;
for(int i=1;i<=n;i++)
{
string s;
s=to_string(i);
if(s.size()%2)
cnt++;
}
cout<<cnt<<'\n';
}

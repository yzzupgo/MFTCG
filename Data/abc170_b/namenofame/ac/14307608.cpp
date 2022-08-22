#include<bits/stdc++.h>
#define ll long long
#define dl double
#define mp make_pair
#define pb push_back
using namespace std;
struct hash_pair {
template <class T1, class T2>
size_t operator()(const pair<T1, T2>& p) const
{
auto hash1 = hash<T1>{}(p.first);
auto hash2 = hash<T2>{}(p.second);
return hash1 ^ hash2;
}
};
int MAXNUM = 5e3+5;
vector <int>vis(MAXNUM);
vector<int> pr;
void sieve() {
pr.push_back(2);
for(ll i=3;i<MAXNUM;i+=2) if(!vis[i]) {
pr.push_back(i);
for(ll j=i*i;j<MAXNUM;j+=2*i) vis[j]=true;
}
}
void solve()
{
ll a,b;
cin >>a >> b;
int test=0;
for(int i=0;i<=100;i++)
{
for(int j=0;j<=100;j++)
{
if(i+j==a && (i*2+j*4)==b)
{
test=1;
break;
}
}
}
if(test==1)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
t=1;
while(t--)
{
solve();
}
return 0;
}

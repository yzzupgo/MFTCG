#include<bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define int long long
#define MAX 2000000000000000000
#define re(i,x,n) for(i=x;i<=n;i++)
typedef long long ll;
using namespace std;
void c_p_c()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
vi graph[200001];
int vis[200001] = {0};
int cost[100001];
int parent = -1;
int costi ;
void dfs(int i)
{
vis[i] = 1;
costi = min(cost[i], costi);
for (auto &it : graph[i])
{
if (vis[it] == 0) {
dfs(it);
}
}
}
int pp[100001];
bool isPrime(int n)
{
int i;
for (i = 2; i * i <= n; i++)
{
if (n % i == 0)
return false;
}
return true;
}
int32_t main()
{
int x, y;
cin >> x >> y;
int mi = x * 2;
int max = x * 4;
if (y >= mi && y <= max)
cout << "Yes";
else
cout << "No";
}

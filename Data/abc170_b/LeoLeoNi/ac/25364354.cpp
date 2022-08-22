#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <iomanip>
#include<cmath>
#include <map>
#define rep(i,x,n) for (int i = x; i < (n); ++i)
#define maprep(x) for(auto i = x.begin(); i != x.end() ; i++)
#define bitrep(N) for (int bit = 0; bit < (1 << N); bit++) for(int i = 0; i < N; i++)
#define dicrep(s) while(next_permutation(s.begin(),s.end()))
using namespace std;
using ll = long long;
using Graph = vector<vector<int>> ;
int dp[100100] = { 0 };
int dfs(Graph X, int s);
vector<bool> seen;
int gcd(int,int);
int main()
{
int N = 0; cin >> N; int M = 0; cin >> M;
rep(i,0,N+1)
{
if ((4 * i) + (2 * (N - i)) == M)
{
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
int dfs(Graph X,int s)
{
seen[s] = true;
for (int i = 0; i < seen.size(); i++)
{
if (X[s][i] == -1)continue;
if (seen[i])continue;
if (i == s)continue;
dfs(X,i);
}
return 0;
}
int gcd(int x , int y)
{
if (y == 0)return x;
return gcd(y, x % y);
}

#include <iostream>
#include <cstdlib>
#include <bitset>
#include <map>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#include <sstream>
using namespace std;
#define ll long long
#define vecll vector<long long>
#define vec2ll vector<vector<long long>>
#define vecdouble vector<double>
#define vecchar vector<char>
#define vecstr vector<string>
#define vec2str vector<vector<string>>
#define vecbool vector<bool>
#define vec2bool vector<vector<bool>>
#define pairll pair<ll,ll>
#define vecpairll vector<pair<long long,long long>>
#define vec2pairll vector<vector<pair<long long,long long>>>
#define forll(s,a,b) for(long long s = a;s < b;s++)
#define forllde(s,a) for(long long s = a;s > 0;s--)
#define INF 1000000000000
#define Pi 3.1415926535897932384626
int main() {
ll n,k,m, ans = 0;
string s="YES";
bool flag = false;
cin >> n >> m;
ll buf;
if(m>=0)
{
buf=m;
}
else if(m+n-1<0)
{
buf=m+n-1;
}
else
{
buf=0;
}
forll(i,0,n)
ans+=m+i;
ans-=buf;
cout << ans;
}

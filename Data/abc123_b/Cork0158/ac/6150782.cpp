#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i,n) for(int i=0;i<n;i++)
#define fin(ans) cout<<(ans)<<endl
#define P 1000000007
#define STI(s) atoi(s.c_str())//string to int
#define mp(p,q) make_pair(p,q)
#define Sort(a) sort(a.begin(),a.end())
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
const int INF = INT_MAX;
const long long LLINF = 1LL<<60;
//g++ -std=c++1z temp.cpp
//./a.exe

ll gcd(ll c, ll d) { return d ? gcd(d, c%d) : c;}
ll lcm(ll c, ll d) { return c / gcd(c,   d) * d;}


int main(void){ios::sync_with_stdio(false);cin.tie(0);
//////////////////////////////////////////////////////
int s[5]={},m = 9,ans=0,dis=0,S=0;
rep(i,5){
    cin >> s[i];
}
rep(i,5){
    S += s[i];
}
if (s[0]%10 ==0 && s[1]%10==0 && s[2]%10==0 && s[3]%10==0 && s[4]%10==0)
{
    cout << S << endl;
}else{
rep(i,5){
    if (s[i]%10 != 0)
    {
        m = min(s[i]%10,m);
        s[i] = (s[i]/10+1)*10;
    }
}

rep(i,5){
    ans += s[i];
}

    dis = ((m/10+1)*10)-m;
    cout << ans-dis << endl;
    
}











//////////////////////////////////////////////////////
return 0;}
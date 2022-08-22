#include<bits/stdc++.h>
using namespace std;int tc = 1;
#define happy ios::sync_with_stdio(false);
#define coding cin.tie(0);
#define F first
#define S second
#define mp make_pair
#define ll long long
#define Pi atan(1)*4
#define pb push_back
#define vpr vector<pr>
#define pr pair<int, int>
#define vi std::vector<int>
#define vll std::vector<ll>
#define YES printf("YES\n");
#define NO printf("NO\n");
#define Yes printf("Yes\n");
#define No printf("No\n");
#define all(n) n.begin(),n.end()
#define point(x) setprecision(x)
#define Test printf("Case %d: ",tc++);
#define Unique(c) (c).resize(unique(all(c))-(c).begin())
#define vout(v) for (auto z: v) cout << z << " "; cout << endl;
#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x;
while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {
cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}
const int M = 1e9 + 7;
const ll Inf = (ll)2e18 + 5;
const int N = 2e5 + 5;
ll vis[N],res[N];
int solve()
{
int n;
cin>>n;
int sum = 0;
if(n>=10){
sum+=9;
}if(n>=1000){
sum+=900;
}if(n>=100000){
sum+=90000;
}
if(n<10){
sum+=(n%10)+1;
}if(n>=100&&n<=1000){
sum += 100*((n/100)-1);
sum+=(n%100)+1;
}if(n>=10000&&n<=100000){
sum += 10000*((n/10000)-1);
sum+=(n%10000)+1;
}
cout<<sum<<endl;
return 0;
}
int main(){
int test = 1;
while (test--)solve();return 0;
}

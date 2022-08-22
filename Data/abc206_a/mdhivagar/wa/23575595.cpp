#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define lli long long int
#define tc int t;cin>>t;while(t--)
#define all(x) x.begin(),x.end()
#define f first
#define s second
#define pb push_back
#define pi pair<int,int>
#define pll pair<lli,lli>
#define vi vector<int>
#define vll vector<lli>
#define vpi vector<pair<int,int> >
#define vpll vector<pair<lli,lli> >
#define vvi vector<vector<int> >
#define vvll vector<vector<lli> >
#define vvpi vector<vector<pair<int,int> > >
#define vvpll vector<vector<pair<lli,lli> > >
#define inf 1000000000
#define maxn 1005
lli mod = 998244353;
int main() {
fastio;
int n;
cin >> n;
int ans = (108 * n) / 100;
if(ans < 206) {
cout << "yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}

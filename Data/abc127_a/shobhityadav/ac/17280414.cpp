#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vll vector<ll>
#define pll pair<ll , ll>
#define vpll vector<pll>
#define umpll unordered_map<ll , ll>
#define mpll map<ll , ll>
#define sll set<ll>
#define stll stack<ll>
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll N,T;
void solve(){
ll A,B;
cin>>A>>B;
if(A>=13)
cout<<B<<'\n';
else if(A>=6 && A<=12)
cout<<B/2<<'\n';
else
cout<<0<<'\n';
}
int main(){
FIO
solve();
return 0;
}

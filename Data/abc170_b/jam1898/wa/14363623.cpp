#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define sll set<long long>
#define si set<int>
#define stk stack<int>
#define que queue<int>
#define pb push_back
#define ff first
#define ss second
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
int x,y;
cin>>x>>y;
string ans="";
if((x-1)*2==y-4||(x-1)*4==y-2)
ans="Yes";
else
ans="No";
cout<<ans<<endl;
}
int main(){
IOS;
int q=1;
while(q--){
solve();
}
}

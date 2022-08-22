#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int,int>
#define rep(i,begin,end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define vi vector<ll>
#define all(x) x.begin(),x.end()
#define show(x) cerr<<#x<<" is: "<<x<<endl;
#define sout(x) cout<<#x<<" is: "<<x<<endl;
#define countBits(x) __builtin_popcount(x)
#define mt make_tuple
#define eb emplace_back
#define pob pop_back
#define star(x) cout<<"********** "<<x<<" **********"<<endl;
#define yes cout<<"Yes"<<endl; return;
#define no cout<<"No"<<endl; return;
#define flus fflush(stdin); fflush(stdout);
#define F first
#define S second
#define np next_permutation
#define prio priority_queue
#define greatPrio priority_queue <ll, vector<ll>, greater<ll>>
#define inf 1e9
#define mod 1000000007
#define N 200100
void solve(){
ll x,y;
cin>>x>>y;
if(4*x-y<0 || (4*x-y)%2==1){
no
}
ll a=4*x-y;
a/=2;
if(a*2 + (x-a)*4==y){
yes
} else{
no
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
t=1;
while(t--){
solve();
}
}

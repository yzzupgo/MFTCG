#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i+=1)
#define reps(i,a,b) for(int i=a;i>=b;i-=1)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define pi pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define in1(x) int x; cin>>x;
#define in2(x,y) int x, y; cin>>x>>y;
#define in3(x,y,z) int x, y, z; cin>>x>>y>>z;
#define in4(x,y,z,w) int x, y, z, w; cin>>x>>y>>z>>w;
#define mi unordered_map<int,int>
#define mem(x) memset(x, 0, sizeof(x))
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
using namespace std;
int32_t main(void){
IOS;
in2(x, y);
if(x == (y/4) && y%4 == 0) cout<<"Yes\n";
else if(x == (y/2) && y%2 == 0) cout<<"Yes\n";
else if((y%4)%2 != 0) cout<<"No\n";
else
{
if(x >= y/4) x -= y/4;
else x -= y/2;
if(x < 0) cout<<"No\n";
else
{
y = y%4;
if(y/2 == x) cout<<"Yes\n";
else cout<<"No\n";
}
}
}

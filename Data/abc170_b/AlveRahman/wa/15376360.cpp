#include<bits/stdc++.h>
#define endl '\n'
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define mod 1000000007
#define FASTIO ios::sync_with_stdio(0); cin.tie(0);
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main(){
FASTIO
ll x,y;
cin>>x>>y;
if((y-2*x)%2==0&&(y-2*x)/2<=x) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}

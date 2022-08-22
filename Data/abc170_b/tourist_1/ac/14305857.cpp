#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rrep(i,a,b) for(int i = a ; i >= b; i--)
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define sq(a) (a)*(a)
#define nl "\n"
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
const int MAXN = 100005;
ll mod=1000000007;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int x,y;
cin>>x>>y;
bool f =0;
for(int i = 0; i <= x; i++){
if(4*i + 2*(x - i) == y){
f = 1;
break;
}
}
if(f){
cout<<"Yes"<<nl;
}
else cout<<"No"<<nl;
return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for (int i = 0; i < (int)(n); ++i)
#define fon(i,n) for (int i = 1; i <= (int)(n); ++i)
#define forc(i,l,r) for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i,n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i,n) for (int i = (int)(n); i >= 1; --i)
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define INF (int)1e9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define sz(a) int((a).size())
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout.precision(10);
int x,y;
cin>>x>>y;
bool flag = 0;
int crne = 0;
int trtle =0;
for(int i=0;i<x+1;i++){
crne = i;
trtle = x-i;
if(crne*2+trtle*4==y){
flag = 1;
break;
}
}
cout<<(flag ? "Yes":"No")<<endl;
return 0;
}

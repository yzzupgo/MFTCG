#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
#define lp(i,s,f) for(ll i = s; i < ll(f); i++)
#define inF freopen("input.in", "r", stdin);
#define outF freopen("output.in", "w", stdout);
#define endl '\n'
#define MOD 1000000007
#define mm(arr) memset(arr, 0, sizeof(arr))
#define F first
#define S second
int main(){
FAST
int x, y;
cin >> x >> y;
int mn = x*2;
int mx = x*4;
if(y >= mn && y <= mx && y%2 == 0){
cout << "Yes";
}
else{
cout << "No";
}
return 0;
}

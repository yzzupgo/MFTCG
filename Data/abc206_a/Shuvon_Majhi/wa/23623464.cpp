#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
#define mp make_pair
#define pii pair<int,int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define inff 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define sortt(a) sort(a,a+n)
#define sortD(a) sort(a,a+n,greater<int>())
#define vsort(v) sort(v.begin(),v.end())
#define VD(v) sort(a.begin(),a.end(),greater<int>())
const int M = 1000000007;
const int inf = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;
if((n * 1.08) == 206) {
cout << "so-so";
} else if((n * 1.08) > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
return 0;
}

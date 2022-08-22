#include<bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define ll long long
#define MOD 1000000007
#define ull unsigned long long
#define f(i,x,n) for(int i=x;i<=n;i++)
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n; cin >> n;
int ans = 0;
if (1 <= n and n <= 9) ans = n;
else if (10 <= n and n <= 99) ans = 9;
else if (100 <= n and n <= 999) ans = n - 90;
else if (1000 <= n and n <= 9999) ans = 909;
else if (10000 <= n and n <= 99999) ans = n - 9090;
else ans = 90909 + (100000-n+1);
cout << ans;
return 0;
}

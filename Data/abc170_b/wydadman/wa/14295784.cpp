#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / __gcd(a, b); }
bool isPrime(int n) {if (n <= 1) return false;
if (n <= 3) return true;
if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false;
return true;}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
ll a,b;
cin>>a>>b;
if(b<=a*2||b>=a*4)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
return 0;
}

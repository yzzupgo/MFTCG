#include<bits/stdc++.h>
#define ll long long int
#define inf 1E18
#define ninf -1*1E18
#define mod 1000000007
#define fi first
#define si second
#define pb push_back
#define vi vector<long long int>
#define pi pair<long long int,long long int>
#define vpi vector<pair<long long int,long long int>>
using namespace std;
ll const lac = 100000;
ll modmul(ll a, ll b) {
return ((a % mod) * (b % mod)) % mod;
}
ll modadd(ll a, ll b) {
return (((a % mod) + (b % mod))) % mod;
}
long long modExpo(long long a, long long b, long long m) {
long long result = 1;
a = a % m;
while(b > 0) {
if(b % 2) {
result = modmul(result, a);
b--;
} else {
a = modmul(a, a);
b /= 2;
}
}
return result % m;
}
ll gcd(ll a, ll b) {
if(b == 0) {
return a;
} else {
return gcd(b, a % b);
}
}
class comp {
public:
bool operator()(int a, int b)const {
return a > b;
}
};
bool compa(int a, int b) {
return a > b;
}
void solve(ll t1) {
double n;
cin >> n;
double tot = (double)n * (1.08);
if(tot < 206) {
cout << "Yay!" << "\n";
return;
} else if(tot > 206) {
cout << ":(" << "\n";
return;
} else {
cout << "so-so" << "\n";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t ;
t = 1;
for(ll i = 1; i <= t; i++) {
solve(t);
}
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}

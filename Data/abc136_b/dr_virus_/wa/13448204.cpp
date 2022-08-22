#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define ll long long
#define ld long double
#define ull unsigned long long
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"\Case #"<<x<<"\:"
#define pi 3.14159265358979323846264338327950L
const ll mod = 1e9+7;
const ll inf = 1e18;
ll popcount(ll num){
num = num - ((num >> 1) & 0x55555555);
num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}
void virus(){
ll a, b, c;
cin>>a>>b>>c;
cout<<(ull)(c - (a-b));
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll t=1;
while(t--){
auto start = high_resolution_clock::now();
virus();
auto stop = high_resolution_clock::now();
auto duration = duration_cast<seconds>(stop - start);
}
return 0;
}

#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define trap_time() std::chrono::high_resolution_clock::now()
#define trap_time_diff(a,b) 1e-9 * std::chrono::duration_cast<std::chrono::nanoseconds>(a - b).count()
#define fr(i,s,k,b) for(int i=s;i<=k;i+=b)
#define fast() ios::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
#define mod 1000000007
using namespace std;
int32_t main() {
fast();
int t = 1;
cin >> t;
while(t--) {
int x;
cin >> x;
float y = x * 1.08;
int z = (int)y;
if(z == 206) {
cout << "so-so" << endl;
} else if(z < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
}

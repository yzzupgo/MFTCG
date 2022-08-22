#include <bits/stdc++.h>
#define sync \
ios_base::sync_with_stdio(false); \
cin.tie(NULL); \
cout.tie(NULL);
#define pb(a) push_back(a)
#define rep(i,d,e) for (int i = d; i < e; i++)
#define ffor(i,a,b) for (int i = a; i <= b; i++)
#define rloop(i,c,d) for (int i = c; i >= d; i--)
#define ll long long
#define vc vector<ll>
#define pp pop_back()
#define mod 1000000007
#define MAX 1000000
using namespace std;
int main() {
sync;
ll n;
cin >> n;
ll ans = (1.08) * n;
if(ans < 206) {
cout << "Yay!";
}
if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
cout << endl;
}

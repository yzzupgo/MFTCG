#include <bits/stdc++.h>
#define ll long long int
#define mk make_pair
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mod 1000000007
using namespace std;
void fast() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}
int main() {
fast();
ll t = 1;
while(t--) {
ll n;
cin >> n;
ll ans = (n * 108) / 100;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t = 1;
while(t--) {
long double z = 1.08, ans, x, y;
cin >> x;
ans = z * x;
if(ans < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define inf 1000000000000000000
const double pi = acos(-1);
const int sz = 200002;
int n,m, k;
int main() {
io
int x, y;
cin>>x>>y;
if(y == x*4) cout<<"Yes";
else if(y == x*2) cout<<"Yes";
else {
bool can = false;
for(int i = 1; i<y; i++) {
if(i*2 + (x-i)*4 == y) can = true;
}
cout<<(can ? "Yes" : "No");
}
}

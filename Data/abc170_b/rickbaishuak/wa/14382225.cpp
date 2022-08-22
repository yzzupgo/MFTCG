#include <bits/stdc++.h>
#define pb push_back
#define s(a,x,y) sort(a.begin()+x, a.begin()+y);
#define mp make_pair
#define F first
#define S second
#define ll long long
using namespace std;
ll a, b, c, d, e;
int main() {
cin>>a>>b;
if(b%2==0||b>4*a||b<2*a) cout<<"No";
else cout<<"Yes";
return 0;
}

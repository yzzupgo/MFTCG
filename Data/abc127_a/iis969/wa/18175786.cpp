#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rrep(i,n) for(int i=((n)-1);i>=0;--i)
#define all(x) (x).begin(), (x).end()
#define PI 3.14159265358979323846264338327950L
using namespace std;
typedef long long ll;
typedef long double ld;
int main() {
int a,b;
cin>>a>>b;
if(b<5) cout<<0;
else if(b<13) cout<<b/2;
else cout<<b;
}

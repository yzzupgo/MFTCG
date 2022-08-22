#include<bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(),(x).end()
#define SZ(x) (x).size()
#define fir first
#define sec second
void scan() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
using namespace std;
const int maxn = 2e5 + 7;
int a[maxn], pre[maxn];
int main() {
ios::sync_with_stdio(false);
cin.tie(0), cout.tie(0);
int a,b,c;cin>>a>>b;
cout<<max(a+b,max(a-b,a*b))<<endl;
return 0;
}

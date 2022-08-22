#include <bits/stdc++.h>
using namespace std;
using ll= long long;
using vi= vector<int>;
using vvi= vector<vi>;
using vd= vector<double>;
using vc= vector<char>;
#define REP(i,x,n) for(int i=x; i<n; i++)
#define rep(i,n) REP(i,0,n)
#define all(x) x.begin(), x.end()
int main(){
int n,l,ans=0;
cin >> n >> l;
vi a(n,l);
rep(i,n) a[i]+=i;
if(l>=0) a[0]=0;
else if(l<0 && l*(-1)+1>=n) a[n-1]=0;
cout << ans << endl;
}

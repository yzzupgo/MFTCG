#include <bits/stdc++.h>
using namespace std;
using ll= long long;
using vi= vector<int>;
using vvi= vector<vi>;
using vd= vector<double>;
using vvd= vector<vd>;
using vc= vector<char>;
#define rep(i,x,n) for(int i=x; i<n; i++)
#define all(x) x.begin(), x.end()
int main(){
int a,b,ans;
cin >> a >> b;
if(a <= 13) ans= b;
else if(6 <= a && a <= 12) ans=b/2;
else ans=0;
cout << ans << endl;
}

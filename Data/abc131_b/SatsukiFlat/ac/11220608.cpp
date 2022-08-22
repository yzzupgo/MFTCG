#include <bits/stdc++.h>
using namespace std;
using ll= long long;
using vi= vector<int>;
using vvi= vector<vi>;
using vd= vector<double>;
using vvd= vector<vd>;
using vc= vector<char>;
using vb= vector<bool>;
using vl= vector<ll>;
#define rep(i,x,n) for(int i=x; i<n; i++)
#define all(x) x.begin(), x.end()
int main(){
int n, l, ans=0, abmin=INT_MAX,abf;
cin >> n >> l;
vi a(n);
rep(i,0,n){
a[i]= l+i;
ans+= a[i];
if(abmin> abs(a[i])){
abmin= abs(a[i]);
abf=i;
}
}
ans-= a[abf];
cout << ans;
return 0;
}

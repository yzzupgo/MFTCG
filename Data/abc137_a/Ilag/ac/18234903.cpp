#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1001001001;
const long long MOD = 1000000007;
const double EPS = 1e-10;
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int a,b;
cin>>a>>b;
cout<<max({a+b,a-b,a*b})<<endl;
}

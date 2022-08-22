#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mk make_pair
#define pb push_back
#define ff first
#define sc second
#define all(x) x.begin(), x.end()
#define sz(x) (x).size()
ll gcd(ll a, ll b);
ll sum(int n);
void go(){
int a,b;cin>>a>>b;
if(a>12) {
cout << b;
}else if(a>6&&a<13) {
cout << b/2;
}else {
cout << 0;
}
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
go();
return 0;
}
ll gcd(ll a, ll b){
if(b == 0) return a;
return gcd(b, a % b);
}
ll sum(int n){
if(n == 0){
return n;
}else{
return sum(n/10) + n%10;
}
}

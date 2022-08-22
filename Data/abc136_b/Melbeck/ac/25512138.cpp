#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>
#include <deque>
#include <queue>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define repp(i,s,n) for(int i = (int)s; i < (int)n; i++)
#define repm(i,s,n) for(int i = (int)s; i > (int)n; i--)
#define fore(i,n) for(auto i:n)
#define ALL(a) (a).begin(), (a).end()
#define Yes() cout << "Yes" << endl;
#define No() cout << "No" << endl;
using ll = long long;
const double pi = 3.14159265358979;
string alf = "abcdefghijklmnopqrstuvwxyz";
template<class T> bool chmin(T &a, T b){
if (a > b){
a = b;
return true;
}
return false;
}
template<class T> bool chmax(T& a, T b){
if (a < b){
a = b;
return true;
}
return false;
}
int gcd(int a, int b){
if(a%b == 0)return b;
return gcd(b, a%b);
}
const int INF = 1e9;
const int mod = 1000000007;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
typedef pair<int,int>P;
int main(void){
int n;
cin >> n;
int eve = 1, odd = 10;
int ans = 0;
while(eve <= n){
if(n < odd)ans += (n-eve)%odd+1;
else ans += odd-eve;
eve *= 100;
odd *= 100;
}
cout << ans << endl;
}

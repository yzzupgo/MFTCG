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
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define repp(i,s,n) for(int i = (int)s; i < (int)n; i++)
#define repm(i,s,n) for(int i = (int)s; i > (int)n; i--)
#define ALL(a) (a).begin(), (a).end()
#define Yes() cout << "Yes" << endl;
#define No() cout << "No" << endl;
using ll = long long;
const double pi = 3.14159265358979;
string alf = "abcdefghijklmnopqrstuvwxyz";
template<class T> bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
template<class T> bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
int gcd(int a, int b) {
if(a % b == 0) {
return b;
}
return gcd(b, a % b);
}
const ll INF = 1LL << 60;
int main(void) {
int n;
cin >> n;
int ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}

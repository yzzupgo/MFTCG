#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#include <cmath>
#include <valarray>
#include <cstdlib>
#include <array>
#include <random>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,a,n) for(int i=(a);i<(n);i++)
#define ll long long
#define llrep(i,a,n) for(ll i=(a);i<(n);i++)
#define sort(A) sort(A.begin(), A.end())
#define zisyo(v) next_permutation(begin(v),end(v))
#define check(i) cout<<"*"<<i<<endl
#define vec(a) vector<a>
#define vvec(a) vector<vector<a>>
#define keta(a) setprecision(a)
int gcd(int x, int y) {
int m = min(x, y);
for(int d = m; d > 0; d--) {
if(x % d == 0 && y % d == 0) {
return d;
}
}
}
ll ketawa(ll n) {
ll sum = 0;
while(n > 0) {
sum += n % 10;
n /= 10;
}
return sum;
}
bool KIBN(string s) {
rep(i, 0, s.size() / 2) {
if(s[i] != s[s.size() - 1 - i]) {
return false;
}
}
return true;
}
bool IsPrime(int num) {
if(num < 2) {
return false;
} else if(num == 2) {
return true;
} else if(num % 2 == 0) {
return false;
}
double sqrtNum = sqrt(num);
for(int i = 3; i <= sqrtNum; i += 2) {
if(num % i == 0) {
return false;
}
}
return true;
}
int main(void) {
int n;
cin >> n;
int ans = n * 1.08;
if(ans == 206) {
cout << "so-so" << endl;
}
if(ans < 206) {
cout << "Yay!" << endl;
}
if(ans > 206) {
cout << ":(" << endl;
}
}

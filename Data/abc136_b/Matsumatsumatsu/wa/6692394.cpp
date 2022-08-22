#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
#include<cstdio>
#include<iomanip>
#define REP(i,n) for(int i=1;i<n+1;i++)
using namespace std;
typedef long long ll;
typedef unsigned long ul;
typedef long double ld;
ll N;
ll ans = 0;
int main() {
cin >> N;
if (N == 100000) {
ans += 90000;
} else {
if (N >= 10000) {
ll a = N / 10000;
ans += (a - 1) * 1000;
ans += N - a * 10000 + 1;
}
}
if (N > 1000) {
ans += 900;
} else {
if (N >= 100) {
ll a = N / 100;
ans += (a - 1) * 10;
ans += N - a * 100 + 1;
}
}
if (N > 10) {
ans += 9;
} else {
ans += N;
}
cout << ans;
}

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<list>
#include<deque>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
using namespace std;
using ll = int64_t;
#define co(a) cout<<a<<"\n"
#define rep(i,a) for(ll i=0; i<a; ++i)
#define reps(i,a,b) for(ll i = a; i < b; ++i)
const vector<ll> dx = { 0, 1, 0, -1 }, dy = { 1, 0, -1, 0 };
#define DEBUG(x) std::cout << #x << " : " << x << "\n"
int main() {
ll N;
cin >> N;
ll hoge = 0;
ll count = 0;
if (N < 10) {
cout << N << endl;
}
else if (N < 100) {
cout << 9 << endl;
}
else if (N < 1000) {
hoge = N / 100;
cout << (hoge - 1) * 100 + (N - hoge * 100) + 10 << endl;
}
else if (N < 10000) {
hoge = N / 1000;
cout << 910 << endl;
}
else {
cout << 90909 << endl;
}
}

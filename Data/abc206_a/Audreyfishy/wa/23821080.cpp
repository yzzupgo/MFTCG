#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = std::numeric_limits<int>::max();
struct In {
In() {}
template <class T> operator T() {
T t;
cin >> t;
return t;
}
};
int main() {
int x;
map<int, int> m;
int N = In();
int all = N * (N - 1) / 2;
for(auto i = 0; i < N; i++) {
x = In();
m[x]++;
}
int b = 0;
for(const auto &e : m) {
b += e.second * (e.second - 1) / 2;
}
cout << all - b;
}

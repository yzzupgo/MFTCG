#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = std::numeric_limits<int>::max();
string str;
vector<int> v;
int main() {
int N, x;
int c = 0;
cin >> N;
for(size_t i = 0; i < N; i++) {
cin >> x;
v.push_back(x);
}
for(size_t i = 0; i < v.size(); i++) {
for(size_t j = i + 1; j < v.size(); j++) {
if(v[i] != v[j]) {
c++;
}
}
}
cout << c;
}

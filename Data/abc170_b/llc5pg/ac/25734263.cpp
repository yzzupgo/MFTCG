#include <bits/stdc++.h>
using namespace std;
void printmat(const vector<vector<int>>& mat) {
for (auto row : mat) {
for (auto elem : row)
cout << elem << " ";
cout << endl;
}
}
void printv(const vector<int>& v) {
for (auto elem : v)
cout << elem << " ";
cout << endl;
}
void printvs(const vector<set<int>>& vs) {
for (auto row : vs) {
for (auto elem : row)
cout << elem << ", ";
cout << endl;
}
}
void printht(const unordered_map<int, int>& ht) {
for (auto elem : ht)
cout << elem.first << " : " << elem.second << endl;
}
void printmp(const map<int, int>& ht) {
for (auto elem : ht)
cout << elem.first << " : " << elem.second << endl;
}
void printst(const set<int>& st) {
for (auto elem : st)
cout << elem << " ";
cout << endl;
}
int find_f(const vector<int>& uf, int i) {
while (uf[i]!=i)
i = uf[i];
return i;
}
void union_f(vector<int>& uf, vector<int>& sz, int a, int b) {
a = find_f(uf, a);
b = find_f(uf, b);
if (a==b) return;
if (sz[a] < sz[b]) {
swap(a,b);
}
sz[a] += sz[b];
uf[b] = a;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T=1, caseIdx=0;
const int MOD = 1e9+7;
while (T--) {
int x, y;
string ans = "No";
cin >> x >> y;
if (2*x<=y && y<=4*x && y%2==0)
ans = "Yes";
cout << ans << endl;
}
}

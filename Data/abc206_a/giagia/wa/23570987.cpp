#include <bits/stdc++.h>
using namespace std;
const long long mod1 = 1000000007;
using ll = long long;
using pq = priority_queue<ll>;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {-1, 0, 1, 0};
long long pow(long long x, long long n) {
long long ans = 1;
while(n != 0) {
long long a = x;
long long z = 1;
while(z * 2 <= n) {
a *= a;
a = a % mod1;
z *= 2;
}
ans *= a;
ans = ans % mod1;
n -= z;
}
return ans;
}
template<typename T>
void input_vec(vector<T> &A, long long N) {
for(int i = 0; i < N; i++) {
cin >> A.at(i);
}
return;
}
template<typename T>
void output_vec(vector<T> &A, long long N) {
for(int i = 0; i < N; i++) {
if(i != 0) {
cout << " ";
}
cout << A.at(i);
}
cout << endl;
return;
}
template<typename T>
long long count_vec(vector<T> &A, T x) {
long long counter = 0;
for(int i = 0; i < (int)A.size(); i++) {
if(A.at(i) == x) {
counter++;
}
}
return counter;
}
vector<char> change_vec(string s, int n) {
vector<char> ans(n);
for(int i = 0; i < n; i++) {
ans.at(i) = s.at(i);
}
return ans;
}
bool can(vector<ll> &a, ll N, ll W) {
if(N == 0) {
return W == 0;
}
return can(a, N - 1, W - a.at(N - 1)) || can(a, N - 1, W);
}
int main() {
ll N;
cin >> N;
if(N < 200) {
cout << "Yay!" << endl;
} else if(N == 200) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}

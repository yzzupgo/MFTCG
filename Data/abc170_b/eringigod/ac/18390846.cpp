#include <bits/stdc++.h>
using namespace std;
class UnionFind {
public:
vector<int> Parent;
UnionFind(int N) {
Parent = vector<int>(N, -1);
}
int root(int A) {
if (Parent[A] < 0) return A;
return Parent[A] = root(Parent[A]);
}
int size(int A) {
return -Parent[root(A)];
}
bool connect(int A, int B) {
A = root(A);
B = root(B);
if (A == B) return false;
if (size(A) < size(B))
swap(A, B);
Parent[A] += Parent[B];
Parent[B] = A;
return true;
}
bool issame(int A, int B) {
return root(A) == root(B);
}
};
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
int64_t modinv(int64_t a, int64_t m) {
int64_t b = m, u = 1, v = 0;
while (b) {
int64_t t = a / b;
a -= t * b; swap(a, b);
u -= t * v; swap(u, v);
}
u %= m;
if (u < 0) u += m;
return u;
}
int64_t pow(int a, int b) {
int64_t ans = (int64_t)1;
for (int i = 0; i < b; i++) {
ans *= (int64_t)a;
}
return ans;
}
int main() {
int X,Y;
cin >> X >> Y;
if (((Y-2*X)%2 == 0)&&(Y-2*X >= 0)&&((Y-2*X)/2 <= X)) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}

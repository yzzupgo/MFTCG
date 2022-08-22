#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using qi = queue<int>;
using pqi = priority_queue<int>;
using pqiii = priority_queue<int, vector<int>, greater<int>>;
using sti = stack<int>;
using mii = map<int, int>;
using msi = map<string, int>;
#define rep(i,k,n) for (int i = (int)(k); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define fixed(n) cout << fixed << setprecision((int)(n));
int main() {
int N, C, T=0;
cin >> N;
rep(i,0,N) {
C = 0;
int B = i+1;
while (B > 0) {
B /= 10;
C++;
}
if(C % 2 == 1) T++;
}
cout << T << endl;
}

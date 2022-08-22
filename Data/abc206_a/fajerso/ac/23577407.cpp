#include <bits/stdc++.h>
using namespace std;
void dbg_out() {
cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
cerr << ' ' << H;
dbg_out(T...);
}
#ifdef TUAN_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
void run_case() {
int N;
cin >> N;
int a = int((long double) N * 1.08);
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else {
cout << ":(";
}
cout << '\n';
}
int main() {
ios::sync_with_stdio(false);
#ifndef TUAN_DEBUG
cin.tie(nullptr);
#endif
int tests = 1;
while(tests-- > 0) {
run_case();
}
return 0;
}

#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<(n);++i)
#define reps(i,cc,n) for(int i=cc;i<(n);++i)
#define dreps(i,cc,n) for(int i=cc;i>(n);--i)
#define llreps(i,cc,n) for(long long i=cc;i<(n);++i)
#define ALL(v) begin(v),end(v)
#define rALL(v) rbegin(v),rend(v)
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
int main() {
int n;
cin >> n;
int a = n * 1.08;
a = a - 206;
if(a < 0) {
cout << "Yay!" << endl;
} else if(a == 0) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}

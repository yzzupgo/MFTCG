#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define S second
#define v vector
#define dbg(x) cout<<#x<<"="<<(x)<<endl;
#define dbg2(x,y) cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
#define dbg3(x,y,z) cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
#define dbg4(x,y,z,w) cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;
#define mp make_pair
#define pb push_back
#define endl '\n'
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
fast_cin();
double n;
cin >> n;
double d = (1.08 * n);
if((floor)(d) < 206) {
cout << "Yay!" << endl;
} else if(d == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}

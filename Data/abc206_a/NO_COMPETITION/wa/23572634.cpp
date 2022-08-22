#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
const long double Pi = 3.141592653;
const ll mod = 998244353;
long long INF = 1000000000000000000;
struct mycmp {
bool operator()(pair<int, int>a, pair<int, int>b)const {
return (a.first < b.first) || (a.first == b.first && a.second > b.second);
}
};
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t = 1;
while(t--) {
ll n;
cin >> n;
n = n * 108;
if(n < 20600) {
cout << "Yay!";
} else if(n == 20600) {
cout << "so-so";
} else {
cout << ":(";
}
}
}

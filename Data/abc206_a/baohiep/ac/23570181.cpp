#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define uniq(x) x.resize(unique(all(x)) - x.begin())
#define ff first
#define ss second
#define pb push_back
#define emb emplace_back
using namespace std;
using ull = unsigned long long;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int N;
cin >> N;
int price = floor(1.08f * N);
if(price < 206) {
cout << "Yay!\n";
} else if(price == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}

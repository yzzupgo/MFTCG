#include <bits/stdc++.h>
using namespace std;
#define fast() {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define o(a) { cout << #a << ":" << (a) <<" ";}
#define ov(a) { cout << "["; \
for(int i = 0; i < (a).size(); ++i){ \
cout << i <<":" << a[i] <<" "; \
if(i % 10 == 9) cout <<"\n"; \
} \
cout << "]"; \
}
#define ovv(a) { cout << "["; \
for(int i = 0; i < a.size(); ++i){ \
for(int j = 0; j < a[i].size(); ++j){ \
cout << "(" << i <<"," <<j <<")" <<":" << a[i][j] <<" "; \
} \
cout << "\n"; \
} \
cout << "]"; \
}
#define op(a) { cout <<"[" << #a << ".fi:"<<a.first; \
cout << " "<< #a << ".se:" << a.second <<"]"; }
#define pb push_back
#define vi vector<int>
#define vii vector<<int>>
#define mii map<int, int>
#define pii pair<int, int>
#define qii priority_que<int, vector<int>, greater<int>>
#define For(i,n) for(int i = 0; i < n; ++i)
#define For1(i,n) for(int i = 1; i <= n; ++i)
#define Forlr(i,l,r) for(int i = l; i <= r; ++i)
#define Forrl(i,r,l) for(int i = r; i >= l; --i)
using ll = long long;
int n, m, k, q;
const int INF = 1e9 + 5;
const int nax = 1e5 + 5;
void solve() {
int x, y;
cin >> x >> y;
if(y > x * 4 || y / 2 > x){
cout << "No";
return;
}
if(y % 2 == 1){
cout << "No";
return;
}
cout <<"Yes";
}
int main()
{
fast();
int t = 1;
while (t--) {
solve();
}
}

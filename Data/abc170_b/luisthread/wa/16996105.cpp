#include <bits/stdc++.h>
using namespace std;
#define len(s) int(s.size())
#define res(x) cout<<((x)?"No\n":"Yes\n")
#define all(v) v.begin(),v.end()
typedef long long ll;
typedef long double ld;
ll mod = 1e9+7;
void solution() {
int n, p;
cin >> n >> p;
res(p % 2 || n >= p || n*4 < p || (n == 0 && p != 0));
}
int main(){
int t = 1;
while(t--)
solution();
return 0;
}

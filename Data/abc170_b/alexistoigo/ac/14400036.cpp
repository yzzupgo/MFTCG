#include <bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
#define FIN freopen("entrada.in", "r", stdin);
#define FOUT freopen("saida.sol", "w", stdout);
#define ull unsigned long long
#define ll long long
#define pii pair<int, int>
#define pb push_back
#define MAX int(1e6+4)
const int INF = 0x3f3f3f3f;
using namespace std;
int main() {
IO
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
int b = x - i;
if ((2 * i + 4 * b) == y) {
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
return 0;
}

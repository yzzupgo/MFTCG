#include <bits/stdc++.h>
#define rep(i,m,n) for(int i = m; i < n; i++)
#define INF 2e9
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
int N, L;
cin >> N >> L;
vector<int> apples(N);
rep (i, 0, N) {
apples.at(i) = L + i;
}
vector<int> apples_abs(N);
rep (i, 0, N) {
apples_abs.at(i) = abs(apples.at(i));
}
int min_index = min_element(all(apples_abs)) - apples_abs.begin();
apples.erase(apples.begin()+min_index);
cout << accumulate(all(apples), 0) << endl;
}

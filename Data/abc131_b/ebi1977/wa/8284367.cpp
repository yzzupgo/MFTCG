#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
int main()
{
ifstream fIn("input.txt");
if (fIn.is_open())
cin.rdbuf(fIn.rdbuf());
int N, L;
cin >> N >> L;
int S;
int m;
for(int i = 0; i < N; i++){
S += L + i;
m = min(m, L + i);
}
cout << S - m << endl;
}

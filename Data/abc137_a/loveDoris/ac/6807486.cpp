#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 2e5 + 100;
int main()
{
int a, b;
cin >> a >> b;
int A = a + b,B = a - b, C = a * b;
int ans = max(A,B);
ans = max(ans, C);
cout << ans;
return 0;
}

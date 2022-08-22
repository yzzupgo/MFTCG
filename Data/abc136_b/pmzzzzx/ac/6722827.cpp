#include<bits/stdc++.h>
using namespace std;
int main() {
int N, ans = 0;
cin >> N;
for (int i = 1; i <= N; i++)
{
if (i <= 9 || (i >= 100 && i <= 999) || (i >= 10000 && i <= 99999)) ans++;
}
cout << ans << endl;
}

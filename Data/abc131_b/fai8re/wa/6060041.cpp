#include "bits/stdc++.h"
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
vector<int> aji(n);
int i = 1;
for (auto&& x : aji)
{
x = l + i - 1;
i++;
}
int ans = 1e9;
int sa = 1e9;
for (int i = 0; i < n; i++)
{
int Nnum = accumulate(aji.begin(), aji.end(), 0);
int N_num = Nnum - aji[i];
if (sa > Nnum - N_num)
{
sa = Nnum - N_num;
ans = N_num;
}
}
cout << ans << endl;
return 0;
}

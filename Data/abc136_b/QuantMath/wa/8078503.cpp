#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
void ABC136B()
{
int N;
cin >> N;
string S = to_string(N);
size_t m = S.size();
if (m <= 2)
{
cout << min(N,9) << endl;
return;
}
if (m == 3)
{
int x = 10 + N - 100;
cout << x << endl;
}
if (m == 4)
{
int x = 9 + 999 - 100 + 1;
cout << x << endl;
return;
}
if (m >= 5)
{
int x = 9 + 999 - 100 + 1;
x += N - 10000;
cout << x << endl;
}
}
int main()
{
ABC136B();
return 0;
}

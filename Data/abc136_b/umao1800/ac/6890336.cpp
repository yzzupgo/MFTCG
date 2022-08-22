#include <iostream>
#include <vector>
#include <random>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main() {
int n; cin >> n;
int cnt = 0;
for (int i = 1; i <= 9 && i <= n; i++)
{
cnt++;
}
for (int i = 100; i <= 999 && i <= n; i++)
{
cnt++;
}
for (int i = 10000; i <= 99999 && i <= n; i++)
{
cnt++;
}
cout << cnt << endl;
return 0;
}

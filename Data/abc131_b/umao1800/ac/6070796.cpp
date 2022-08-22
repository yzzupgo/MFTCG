#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
vector<int> taste(N);
vector<int> tasteAbs(N);
for (int i = 0; i < N; i++)
{
taste[i] = L+i;
tasteAbs[i] = abs(taste[i]);
}
int min = 99999999;
int minNum = 0;
for (int i = 0; i < N; i++)
{
if (tasteAbs[i] <= min)
{
min = tasteAbs[i];
minNum = i;
}
}
int ans = 0;
for (int i = 0; i < N; i++)
{
if (i != minNum)
{
ans += taste[i];
}
}
cout << ans << endl;
return 0;
}

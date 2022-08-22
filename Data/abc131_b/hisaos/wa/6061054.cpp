#include <bits/stdc++.h>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int orgPieTaste = 0;
for (int i = 0; i < N; i++)
{
orgPieTaste += (L + i - 1);
}
int maxPieTaste;
int minAppleDiff = 9999999999;
for (int i = 0; i < N; i++)
{
int diff = abs(L + i - 1);
if (diff < minAppleDiff)
{
maxPieTaste = orgPieTaste - (L + i - 1);
minAppleDiff = diff;
}
}
cout << maxPieTaste << endl;
}

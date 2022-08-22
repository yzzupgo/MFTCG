#include <bits/stdc++.h>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int orgPieTaste = 0;
for (int i = 0; i < N; i++)
{
orgPieTaste += (L + i);
}
int maxPieTaste = 0;
int minAppleDiff = 99999999;
for (int i = 0; i < N; i++)
{
int diff = abs(L + i);
if (diff < minAppleDiff)
{
maxPieTaste = orgPieTaste - (L + i);
minAppleDiff = diff;
}
}
cout << maxPieTaste << endl;
}

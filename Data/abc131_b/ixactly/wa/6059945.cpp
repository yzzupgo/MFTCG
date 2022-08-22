#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
vector<int> taste(201);
REP(i, n) {
taste[i] = l+i;
}
if (l < 0 && l+n >= 0) {
int sum = 0;
REP(i, n) {
sum += taste[i];
}
cout << sum << endl;
}
else if (l < 0) {
int sum = 0;
REP(i, n-1) {
sum += taste[i];
}
cout << sum << endl;
}
else {
int sum = 0;
REP(i, n-1) {
sum += taste[i+1];
}
cout << sum << endl;
}
}

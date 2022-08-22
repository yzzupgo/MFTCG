#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define REP(i,n) for (int i = 0; i < n; i++)
#define check cout << "OK" << endl
int main() {
int x, y;
cin >> x >> y;
if (x * 4 >= y && x * 2 <= y)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}

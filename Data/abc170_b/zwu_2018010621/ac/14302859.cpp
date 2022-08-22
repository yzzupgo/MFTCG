#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int N = 1000 + 5;
int main()
{
int turtle,crane;
int sum, ans;
cin >> sum >> ans;
turtle = (ans - 2 * sum) / 2;
crane = sum - turtle;
if(turtle >= 0 && crane >= 0 && turtle*4+2*crane == ans)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}

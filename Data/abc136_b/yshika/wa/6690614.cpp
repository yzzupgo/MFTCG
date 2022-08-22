#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void) {
string N_str;
cin >> N_str;
int N = stoi(N_str);
int keta = N_str.length();
int ans = 0;
switch (keta)
{
case 1:
ans = N;
break;
case 2:
ans = 9;
break;
case 3:
ans = 9 + N - 99;
break;
case 4:
ans = 9 + 900;
break;
case 5:
ans = 9 + 999 + N - 9999;
break;
case 6:
ans = 9 + 900 + 90000;
break;
default:
break;
}
cout << ans << endl;
}

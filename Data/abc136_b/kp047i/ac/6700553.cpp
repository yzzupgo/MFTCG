#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int ans = 0;
string str;
for (int i = 1; i <= n; ++i)
{
str = to_string(i);
if(str.length() % 2 == 1){
ans++;
}
}
cout << ans << endl;
}

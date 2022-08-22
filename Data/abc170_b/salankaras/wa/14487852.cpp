#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
int a, b;
cin >> a >> b;
string ans = "No";
for(int i = 0; i < a; i++)
if(4*i + 2*(a-i) == b)
{
ans = "Yes";
break;
}
cout << ans;
return 0;
}

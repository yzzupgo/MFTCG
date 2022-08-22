#include <bits/stdc++.h>
using namespace std;
int digit(int x){
int ret = 0;
for (int i = 0; i < 7; i++)
{
x /= 10;
ret++;
if (x == 0)break;
}
return ret;
}
int main(){
int n;cin >>n;
int ans;
if (digit(n) == 6)
{
ans = 90909;
}
if (digit(n) == 5)
{
ans = n - 9999;
ans += 909;
}
else if(digit(n) == 4)
{
ans = 909;
}
else if (digit(n) == 3)
{
ans = n - 99;
ans += 9;
}
else if (digit(n) == 2)
{
ans = 9;
}
else if (digit(n) == 1)
{
ans = n;
}
cout << ans << endl;
}

#include <iostream>
#include <cstdio>
using namespace std;
long long n, ans;
bool f(int p){
int re;
for(re = 0; p; re++, p /= 10);
return re % 2;
}
int main()
{
cin >> n;
for(int i = 1; i <= n; i++) ans += f(i);
cout << ans;
return 0;
}

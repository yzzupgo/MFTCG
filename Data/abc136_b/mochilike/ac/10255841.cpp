#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
int main(void)
{
int n;
cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++)
{
int cnt = 0;
int j = i;
while(j>0){
j /= 10;
cnt++;
}
if((cnt%2) != 0) ans++;
}
cout << ans << endl;
return 0;
}

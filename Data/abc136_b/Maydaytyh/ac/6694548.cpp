#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
#define INF 0x3f3f3f3f
#define MAXN 100000+50
#define MAXM 30000
#define ll long long
#define rep(i,n,m) for(int i=n;i<=m;++i)
#define mod 1000000000 + 7
#define mian main
#define mem(a,b) memset(a, b, sizeof a)
#ifndef ONLINE_JUDGE
#define dbg(x) cout << #x << "=" << x << endl;
#else
#define dbg(x)
#endif
inline int read()
{
int x = 0, f = 1;
char ch = getchar();
while (ch < '0' || ch > '9')
{
if (ch == '-')
f = -1;
ch = getchar();
}
while (ch >= '0' && ch <= '9')
{
x = 10 * x + ch - '0';
ch = getchar();
}
return x * f;
}
int s[] = { 0,9,0,900,0,90000,0,9000000};
int main()
{
int T=1;
while(T--){
int n = read();
int num = n / 10;
int sum = 0;
if (num == 0) sum = n;
else {
num = n;
int num_d = 0;
while (num) { num /= 10; num_d++; }
for (int i = 1; i < num_d; ++i) sum += s[i];
int st = 1;
rep(i, 1, num_d - 1) st *= 10;
if (num_d & 1)
{
sum += (n - st + 1);
}
}
cout << sum << endl;
}
}

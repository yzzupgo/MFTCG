#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
const long long INF = 1LL << 60;
int keta(int N)
{
int count = 0;
while(N > 0)
{
N /= 10;
count++;
}
return count;
}
int main()
{
int N; cin >> N;
int res = 0;
for(int i = 1; i <= N; i++)
{
if(keta(i)%2 == 1) res++;
}
cout << res << endl;
}

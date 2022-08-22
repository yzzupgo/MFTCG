#include <bits/stdc++.h>
using namespace std;
long long a[10];
int main()
{
cin.tie(NULL);
cout.tie(NULL);
ios_base::sync_with_stdio(false);
int n, m;
int num = 0;
int i, j;
cin >> n >> m;
for(i = 0;i <=n; i++)
{
for(j = 0; j <= n; j++)
{
if(i+j == n)
{
if(i*2 + j*4 == m)
{
cout << "Yes";
return 0;
}
}
}
}
printf("No");
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int n , i , j , k , mn = 10000 , mx = -10000 , sum = 0;
int l;
scanf("%d %d",&n,&l);
for(i = 1 ; i <= n ; i++)
{
k = l+i-1;
sum += k;
if(k < 0) k = -k;
if(k < mn) mn = k;
}
if(sum >= 0) sum -= mn;
if(sum < 0) sum += mn;
printf("%d\n",sum);
return 0;
}

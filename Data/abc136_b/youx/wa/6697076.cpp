#include<cstdio>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int lb[] = { 1, 100,10000};
int arr[] = { 9,999,99999 };
int ub[] = { 99,9999,999999 };
int tar[] = { 9,900,90000};
int n;
int i;
int sum = 0;
scanf("%d", &n);
if (n == 100000)
{
printf("90909\n");
return 0;
}
for (i = 0; i < 3; i++)
{
if (n >= lb[i] && n <= ub[i])
{
sum += arr[i] <= n ? arr[i] : n - lb[i] + 1;
break;
}
sum += tar[i];
}
printf("%d\n", sum);
return 0;
}

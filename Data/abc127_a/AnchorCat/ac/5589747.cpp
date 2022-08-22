#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<functional>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#define lowbit(a) ((a)&(-(a)))
using namespace std;
void file(bool opt)
{
if (opt&&fopen("in.txt", "r"))
{
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
}
}
int main()
{
int a, b;
cin >> a >> b;
if (a <= 5)
puts("0");
else if (a <= 12)
printf("%d\n", b / 2);
else
printf("%d\n", b);
return 0;
}

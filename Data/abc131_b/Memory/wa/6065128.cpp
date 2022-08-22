#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
#include <queue>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
int n, k, res;
scanf("%d%d", &n, &k);
if (n+k<0) res=(k*2+n-1)*n/2-(k+n-1);
else if (k<=0) res=(k*2+n-1)*n/2;
else res=(k*2+n-1)*n/2-k;
printf("%d\n", res);
return 0;
}

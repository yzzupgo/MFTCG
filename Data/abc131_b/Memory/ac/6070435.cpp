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
int minl=1000000000;
int main()
{
int n, k, res;
scanf("%d%d", &n, &k);
int a[n], h=k;
a[0]=k;
for(int i=1; i<n; i++) a[i]=1+a[i-1], h+=a[i];
for(int i=0; i<n; i++) if(abs(a[i])<minl) minl=abs(a[i]), res=h-a[i];
printf("%d\n", res);
return 0;
}

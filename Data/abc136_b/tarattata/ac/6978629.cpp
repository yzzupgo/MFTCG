#include <stdio.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <iterator>
#include <assert.h>
#pragma warning(disable:4996)
typedef long long ll;
#define MIN(a,b) ((a)>(b)? (b): (a))
#define MAX(a,b) ((a)<(b)? (b): (a))
#define LINF 9223300000000000000
#define INF 2140000000
const long long MOD = 1000000007;
using namespace std;
int main(int argc, char* argv[])
{
int n;
scanf("%d", &n);
int ans=0;
int i;
for(i=1; i<=n; i++) {
int curr=i;
int cnt=0;
while(curr) {
curr/=10;
cnt++;
}
if(cnt%2) {
ans++;
}
}
printf("%d\n", ans);
return 0;
}

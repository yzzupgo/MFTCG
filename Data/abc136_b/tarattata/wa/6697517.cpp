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
if(n==100000) {
printf("90909\n");
}
else if(n>10000) {
printf("%d\n", n-9090);
}
else if(n>1000) {
printf("900\n");
}
else if(n>100){
printf("%d\n", n-90);
}
else if(n>=9) {
printf("9\n");
}
else {
printf("%d\n", n);
}
return 0;
}
